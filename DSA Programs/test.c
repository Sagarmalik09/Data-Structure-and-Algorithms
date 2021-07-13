#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100
void insert(int[], int);
int partition(int[], int, int);
void quickSort(int[], int, int);
void display(int[], int);
int main()
{
    int size;
    printf("\nEnter the number of elements...");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter %d elements...", size);
    insert(arr, size);
    printf("\nElements of unsorted array are...\n");
    display(arr, size);
    quickSort(arr, 0, size); //call quick sort function
    printf("\nElements of sorted array are...\n");

    display(arr, size);
    return 0;
}
void insert(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("\t%d", arr[i]);
}
int partition(int arr[], int low, int high)
{
    int left, right, pivot, temp;
    pivot = arr[low];
    left = low;
    right = high;
    while (left < right)
    {
        while (arr[left] <= pivot)
            left++;
        while (arr[right] > pivot)
            right--;
        if (left < right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    arr[low] = arr[right];
    arr[right] = pivot;
    return right;
}
void quickSort(int arr[], int left, int right)
{
    int q;
    if (left < right)
    {
        q = partition(arr, left, right);
        quickSort(arr, left, q - 1);
        quickSort(arr, q + 1, right);
    }
}