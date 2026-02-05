1. Data Structures
   Each node contains data, prev and next which store data, point to prev data and next data respectively. This structure allows traversal in both forward and backward directions, which is a key feature of a doubly linked list.
   Initiallay both head and tail poineter set to NULL which indicate the empty list.

2. Function implemented
   -> insert_node(int value) :
      This inserts the newnode at the end of the list, allocates the memory and assign the given value to node.

   -> delete_node() :
      It deletes the last node from the list. If the list is empty, displays the empty message and otherwise frees the node.

   -> display() :
      This function demonstrates reverse traversal, which is the main requirement of the problem. Starts traversal from tail and prints each node’s data while moving backward using the prev pointer. Continues until the beginning of the list is reached.

3. Main()
   a. Calls display() to show the list when it is initially empty.
   b. Inserts multiple nodes into the list using insert_node().
   c. Displays the list in reverse order.
   d. Deletes the last two nodes using delete_node().
   e. Displays the updated list again in reverse order.

4. Output
   The output of the required code is :

   List is empty
   5->4->3->2->1->NULL
   3->2->1->NULL