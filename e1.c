#include <stdio.h>
#include <conio.h>
  
int main()
{
    int year;
    printf("Enter a year for leap year check\n");
    scanf("%d", &year);
     if(((year%4==0)&&(year%100!=0))||(year%400==0)){
     printf("%d is leap year\n", year);
     }
     else
     {
     printf("%d is not leap year\n", year);
    }
    getch();
    return 0;
}
