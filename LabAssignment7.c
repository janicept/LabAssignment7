//Janice Kleinhenz
//COP3502C
//March 8, 2024


#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp, sum = 0;
    for (i = 0; i < n-1; i++)
    {
        int count = 0;
        for (j = 0; j < n-i-1; j++)
        {
            
            if (arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;                
            }
            count++;    
        }       
            sum += count;
    }
     printf("The total bubble sort swaps:  %d\n", sum);
}

void selectionSort(int arr[], int n)
{
    int i, j, temp, sum, count = 0;
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }    
        count++;

    }
    sum += count;
    printf("The total selection sort swaps:  %d\n", sum);
    
}

int main()
{
    int arr1[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    int arr2[] = {90,  80,  70,  60,  50,  40,  30,  20,  10};
    int n = 9; 

    printf("Array 1:\n");
    bubbleSort(arr1, n);
    selectionSort(arr1, n);

    printf("Array 2:\n");
    bubbleSort(arr2, n);
    selectionSort(arr2, n);

    return 0;
}
