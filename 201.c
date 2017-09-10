#include <stdio.h>
#include <string.h>
void swap(int*, int *); 
void main()
{
    int num1, num2;
    printf("\nEnter two num:");
    scanf("%d %d", &num1, &num2);
    printf("\nThe num before swapping are Num1= %d Num2 = %d", num1, num2);
    swap(&num1, &num2);       
    printf("\nThe num after swapping are Num1= %d Num2 = %d", num1, num2);
}
 
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
