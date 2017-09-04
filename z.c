#include <stdio.h>
main()
{
int n, reversedNum = 0, remainder;
printf("Enter an int: ");
scanf("%d", &n);
while(n != 0)
 {
 remainder = n%10;
 reversedNum = reversedNum*10 + remainder;
 n /= 10;
    }
printf("Reversed Num = %d", reversedNum);
  return 0;
}
