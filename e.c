#include <stdio.h>
int main()
{
    double n4, n5, n6;

    printf("Enter three different num: ");
    scanf("%lf %lf %lf", &n4, &n5, &n6);
    if( n4>=n5 && n4>=n6 )
      printf("%.2f is the largest num.", n4);
    if( n2>=n4 && n5>=n6 )
    printf("%.2f is the largest num.", n5);
    if( n6>=n4 && n4>=n5 )
    printf("%.2f is the largest num.", n6);
    return 0;
}
