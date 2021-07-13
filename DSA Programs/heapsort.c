#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void insert(int[], int);
void heapSort(int[], int);
void heapify(int[], int, int);
void display(int[], int);
int main()
{
    int size, choice;
    printf("\nEnter the number of elements...");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter %d elements...", size);
    insert(arr, size);
    printf("\nElements of unsorted array are...\n");
    display(arr, size);
    heapSort(arr, size);
    printf("\nElements of sorted array are...\n");
    display(arr, size);
    return 0;
}
void insert(int arr[], int size) //insert elements in array
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int size) //display elements of array
{
    int i;
    for (i = 0; i < size; i++)
        printf("\t%d", arr[i]);
}

void heapSort(int arr[], int size)
{
    int i, temp;
    for (i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);
    for (i = size - 1; i >= 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}
void heapify(int arr[], int size, int i)
{
    int left, right;
    int largest;
    int temp;
    largest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, size, largest);
    }
}
