#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define max 100

char stack[max];
int top = -1;

void push(char c)
{ 
 stack[++top] = c; 
 }
 
char pop() 
{
 return (top == -1) ? '\0' : stack[top--]; 
 }
 
char peek() 
{
 return (top == -1) ? '\0' : stack[top];
  }

// Operator precedence
int precedence(char op) {
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return 0;
}

void convert(char* infix, char* postfix) {
    top = -1; 
    int k = 0;

    for(int i = 0; infix[i]; i++) {
        char c = infix[i];

        if(isdigit(c)) 
		{
            postfix[k++] = c;
        }
        else if(c == '(') 
		{
            push(c);
        }
        else if(c == ')') 
		{
            while(top != -1 && peek() != '(') 
			{
                postfix[k++] = pop();
            }
            pop();
        }
        else {
            while(top != -1 && precedence(peek()) >= precedence(c)) 
			{
                postfix[k++] = pop();
            }
            push(c);
        }
    }

    while(top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';
}

int evaluate(char* postfix){
    int stk_val[max];
    int top_val = -1;

    for(int i = 0; postfix[i]; i++) 
	{
        char c = postfix[i];

        if(isdigit(c))
        {
            stk_val[++top_val] = c - '0';
        }
		else {
            int b = stk_val[top_val--];
            int a = stk_val[top_val--];
            switch(c) 
			{
                case '+':
			    	stk_val[++top_val] = a + b; 
			    	break;
                case '-': 
			    	stk_val[++top_val] = a - b; 
			    	break;
                case '*': 
			    	stk_val[++top_val] = a * b; 
			    	break;
                case '/': 
			    	stk_val[++top_val] = a / b; 
			    	break;
                case '^': 
			    	stk_val[++top_val] = pow(a,b); 
					break;
            }
        }
    }

    return stk_val[top_val];
}

int main() {
    char infix[max], postfix[max];

    printf("Enter an infix expression (single digit operands only): ");
    scanf("%s", infix);

    convert(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);

    int result = evaluate(postfix);
    printf("Evaluated Result: %d\n", result);

    return 0;
}

