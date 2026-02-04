1. Data structures 
   char stack[max], A fixed size array with max=100 is to store open bracket of the expression.
   The 'top' keeps track of the top element of stack which initialized to -1 indicates the empty stack. 'top' gets increamented with push and decremented with pop.

2. Function implemented
   -> push(char c) : 
      Adds a character (opening bracket) to the top of the stack. Checks if the stack is full. If full, prints "Stack Overflow". Otherwise, increments top and stores the character at stack.

   -> pop() :
      Removes and return the top character from the stack. Checks if the stack is empty. If empty, returns '\0'. Otherwise, returns stack and decrements top.

   -> isMatching(char open, char close) :
      Checks if an opening bracket matches the closing bracket.
      Returns true if:
        open == '(' && close == ')'
        open == '{' && close == '}'
        open == '[' && close == ']'
      Otherwise, returns false.

   -> isBalanced(char *expr) :
      Determines whether a given expression has balanced parentheses. Resets top = -1 at the start. Traverses each character in the expression: 
        If it is an opening bracket, pushes it onto the stack.
        If it is a closing bracket, pops the top of the stack and checks if it matches.
        If there is no match or the stack is empty, returns unbalanced (0).

3. Main()
   An array of expressions is defined.
   Prints the expression.
   Calls isBalanced() to check for balance.
   Prints "Balanced" if the function returns 1 and "Not Balanced" if 0.

4. Output
   Expression: a + (b - c) * (d
   Result: Not Balanced

   Expression: m + [a - b * (c + d * {m)]
   Result: Not Balanced

   Expression: a + (b - c)
   Result: Balanced