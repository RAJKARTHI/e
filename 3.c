#include <stdio.h>
main()
{
  int n, reversedIntr = 0, remainder, originalInt;
  printf("Enter an int: ");
  scanf("%d", &n);
  originalInt = n;
  while( n!=0 )
  {
  remainder = n%10;
  reversedInt = reversedInt*10 + remainder;
  n /= 10;
  }
  if (originalInt == reversedInt)
  printf("%d is a palindrome.", originalInt);
   else
   printf("%d is not a palindrome.", originalInt);
   return 0;
}
