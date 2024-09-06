#include <stdio.h>
int main()
{
    int n, i, j, temp,flag;
    printf("enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {   flag=0;
        for (j = 0; j < n - 1 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag=1;
            }
        }
        if(flag==0)
        {break;}
    }
    printf("the sorted array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf(" \n");
    return 0;
}