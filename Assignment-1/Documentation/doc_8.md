1. Data Structures
   The program primarily uses arrays to store and process the data. An integer array arr[] is used to store N randomly generated integers in the range 1 to 1000. Global variables are used to count operations:
   comparisons: stores the total number of comparisons made during sorting.
   swaps:stores the total number of swaps.


2. Functions Implemented
   -> swap(int *a, int *b)
      This waps two integer values and increments the swap counter.

   -> bubbleSort(int arr[], int n)
      ThiS sorts the array using the Bubble Sort algorithm.

   -> selectionSort(int arr[], int n)
      This sorts the array using the Selection Sort algorithm.

   -> insertionSort(int arr[], int n)
      This sorts the array using the Insertion Sort algorithm.

   -> mergeSort(int arr[], int l, int r)
      This sorts the array using the Merge Sort algorithm.

   -> merge(int arr[], int l, int m, int r)
      This merges two sorted subarrays into one sorted array.

   -> display(int arr[], int n)
      This displays the elements of the array.

3. Main()
   a. Accepts the number of elements N from the user
   b. Generates N random integers between 1 and 1000
   c. Displays the unsorted array
   d. Prompts the user to select a sorting algorithm
   e. Sorts the array using the selected algorithm
   f. Displays the sorted array
   g. Displays the total number of comparisons and swaps

4. Output
   Enter number of elements (N): 6
   Choose Sorting Algorithm: Bubble Sort
   
   Generated Numbers:
   345 23 901 78 456 12
   
   Sorted Numbers:
   12 23 78 345 456 901
   
   Total Comparisons: 15
   Total Swaps: 7