#include <stdio.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void bubbleSortPrint(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) {
           		swap(&arr[j], &arr[j+1]);
           		printf("%d", j);
           }
    printf("\n");
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}

int main()
{
	int b[10];
	
	b[0] = 8;
	b[1] = 7;
	b[2] = 5;
	b[3] = 4;
	b[4] = 1;
	b[5] = 3;
	b[6] = 2;
	b[7] = 6;
	b[8] = 9;
	b[9] = 10;
	
	bubbleSortPrint(b, 10);
	printArray(b, 10);
	
	return 0;
}
