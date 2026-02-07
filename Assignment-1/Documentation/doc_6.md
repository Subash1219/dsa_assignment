1. Data structure
   A heap is a complete binary tree stored using an array. Here two types of heaps are implemented:
   Max Heap : Parent node is greater than or equal to its children
   Min Heap : Parent node is smaller than or equal to its children

2. Function Implemented
   -> swap(int *a, int *b) :
      This swaps two integer values.

   -> maxHeapify(int arr[], int n, int i) :
      It ensures the subtree rooted at index i satisfies Max Heap property. It compares parent with left and right child, swaps with the largest element and recursively heapifies the affected subtree.

   -> minHeapify(int arr[], int n, int i) :
      It ensures the subtree rooted at index i satisfies Min Heap property. It compares parent with left and right child, swaps with the smallest element and recursively heapifies the affected subtree.

   -> buildMaxHeap(int arr[], int n) :
      It converts an unsorted array into a Max Heap.

   -> buildMinHeap(int arr[], int n) :
      It converts an unsorted array into a Min Heap.

   -> display(int arr[], int n) :
      This displays the elements of the array.

3. Main()
   a. Declares an unsorted array
   b. Displays original array
   c. Builds and displays Max Heap
   d. Reinitializes array
   e. Builds and displays Min Heap

4. Output
   Original Array:
   4 10 3 5 1
   Max Heap:
   10 5 3 4 1
   Min Heap:
   1 4 3 5 10
