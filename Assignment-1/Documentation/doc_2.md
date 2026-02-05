1. Data Structures
   There are two stack implemented using array:
   stack[max]-This stack is used during infix to postfix conversion to temporarily store operators and parentheses.
   stk_val[max]-This stack stores integer values while evaluating the postfix expression.

2. Function implemented
   -> push(char c) :
      It pushes an operator and parantheses onto the stack, Increament top and store the character to the stack.

   -> pop() :
      It removes and returns the top element from stack, if the stack is empty it will return '\0' otherwise returns the top element and decrese top.

   -> peek() :
      It is used to compare operator precedence during infix to postfix conversion.

   -> precedence(char op) :
      It returns an integer representing the precedence level.
      ^ (Highest)
      *, / (Medium)
      +, - (Lowest)

   -> convert(char* infix, char* postfix) :
      This scans the infix expression character by character, if the character is digit it directly got added in postfix. If it is (, it is pushed onto the stack. If  ), operators are popped until ( is found. Operators with higher or equal precedence are popped before pushing the current operator.

   -> evaluate(char* postfix)
      This function evaluates the postfix expression.

3. Main() 
   It accepts an infix expression from the user. Calls function to convert the infix expression into postfix. Displays the postfix expression and Calls evaluate() to compute the result of the postfix expression. Displays the evaluated result.

4. Output 
   //INPUT:Enter an infix expression (single digit operands only): 3+5*2
   Postfix Expression: 352*+
   Evaluated Result: 13


