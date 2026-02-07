#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long comparisons = 0;
long swaps = 0;

/* Utility function to swap */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    swaps++;
}

/* Bubble Sort */
void bubbleSort(int arr[], int n)
{
    comparisons = swaps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparisons++;
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

/* Selection Sort */
void selectionSort(int arr[], int n)
{
    comparisons = swaps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            comparisons++;
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(&arr[i], &arr[min]);
    }
}

/* Insertion Sort */
void insertionSort(int arr[], int n)
{
    comparisons = swaps = 0;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            comparisons++;
            arr[j + 1] = arr[j];
            swaps++;
            j--;
        }
        if (j >= 0)
            comparisons++;

        arr[j + 1] = key;
    }
}

/* Merge function */
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        comparisons++;
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

/* Merge Sort */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
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
    int n, choice;
    int arr[1000];

    printf("Enter number of elements (N): ");
    scanf("%d", &n);

    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000 + 1;

    printf("\nGenerated Numbers:\n");
    display(arr, n);

    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            bubbleSort(arr, n);
            break;
        case 2:
            selectionSort(arr, n);
            break;
        case 3:
            insertionSort(arr, n);
            break;
        case 4:
            comparisons = swaps = 0;
            mergeSort(arr, 0, n - 1);
            break;
        default:
            printf("Invalid choice\n");
            return 0;
    }

    printf("\nSorted Numbers:\n");
    display(arr, n);

    printf("\nTotal Comparisons: %ld\n", comparisons);
    printf("Total Swaps: %ld\n", swaps);

    return 0;
}

