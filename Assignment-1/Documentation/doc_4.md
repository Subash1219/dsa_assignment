1. Data Structures
   Each node contains data, prev and next which store data, point to prev data and next data respectively. This structure allows traversal in both forward and backward directions, which is a key feature of a doubly linked list.
   Initiallay both head and tail poineter set to NULL which indicate the empty list.

2. Function implemented
   -> insert_node(int key, int value) :
      This function inserts a new node with the given value after the node containing key. If the key is found, the new node is inserted at the end of list.

   -> delete_node(int key) :
      This function deletes the node containing the given key. If the list is empty throws the empty message and also when the key not found.

   -> display() :
      It displays the elements of the doubly linked list from head to tail.

3. Main()
   a. Inserting nodes using insert_node(key, value).
   b. Displaying the list after insertion.
   c. Deleting specific nodes using delete_node(key).
   d. Displaying the updated list.

4. Output
   Key not found, inserted at end..
   2->3->4->5->7->NULL
   Given key not found
   3->4->5->7->NULL