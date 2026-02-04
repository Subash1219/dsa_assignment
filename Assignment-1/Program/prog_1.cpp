#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow \n");
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (top == -1)
    {
        return '\0';
    }
	return stack[top--];
}

// Check if opening and closing brackets match
int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

// Check if expression is balanced
int isBalanced(char *expr) {
    top = -1;
    for (int i = 0; expr[i] != '\0'; i++) {
        char c = expr[i];

        if (c == '(' || c == '{' || c == '[')
            push(c);
        else if (c == ')' || c == '}' || c == ']') {
            char open = pop();
            if (!isMatching(open, c))
                return 0;
        }
    }

    return (top == -1); // balanced if stack empty
}

int main() {
    char *expressions[] = {
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m)]",
        "a + (b - c)"
    };

    int n = 3;
    for (int i = 0; i < n; i++) {
        printf("Expression: %s\n", expressions[i]);
        if (isBalanced(expressions[i]))
            printf("Result: Balanced\n\n");
        else
            printf("Result: Not Balanced\n\n");
    }

    return 0;
}

