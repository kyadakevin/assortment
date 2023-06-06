
#include <stdio.h>


int main()
{
    int arr[50], i, size, first, second;

    printf("Please Enter the Number of elements in an array= \n");
    scanf("%d", &size);

    printf("Please Enter %d elements of an Array \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    first = second =i ;
    for (i = 0; i < size; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }
    printf("\nThe Largest Number in this Array = %d", first);
    if (second == i)
    {
        printf("The Second Largest Number does not exist\n");
    }

    else
    {
        printf("\nThe Second Largest Number in this Array = %d", second);
    }

}

