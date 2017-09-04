#include<stdio.h>
#include<conio.h>
 int main()
 {
  int num, i, isPrime, n;
  printf("To print all prime num between 1 to N\n");
  printf("Enter value of N\n");
  scanf("%d",&num);
  for(n = 1; n <= num; n++){
  Prime = 0;
  for(i=2;i<=n/2;i++){
   if(n%i==0){
   Prime = 1;
   break;
  }
  }
  if(Prime==0 && n!= 1)
  printf("%d ",n);
  }
 getch();
 return 0;
}
