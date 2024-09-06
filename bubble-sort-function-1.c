#include <stdio.h>
void bubble_sort (int arr[],int n )
{   int  i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
}
void printarray (int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf(" \n");
}
int main()
{   int n;
    printf("enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_sort (arr,n);
    printf("the sorted array is :\n  ");
    printarray (arr, n);
    
    return 0;
}