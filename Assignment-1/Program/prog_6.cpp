#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Heapify for Max Heap */
void maxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

/* Heapify for Min Heap */
void minHeapify(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i)
    {
        swap(&arr[i], &arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

/* Build Max Heap */
void buildMaxHeap(int arr[], int n)
{
    for (int i = n/2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);
}

/* Build Min Heap */
void buildMinHeap(int arr[], int n)
{
    for (int i = n/2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}

/* Display array */
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array:\n");
    display(arr, n);

    buildMaxHeap(arr, n);
    printf("Max Heap:\n");
    display(arr, n);

    int arr2[] = {4, 10, 3, 5, 1};

    buildMinHeap(arr2, n);
    printf("Min Heap:\n");
    display(arr2, n);

    return 0;
}

