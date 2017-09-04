 #include<stdio.h>
 #include<conio.h>
 void main()
 {
    char s[20];
    int i,n=5;
    clrscr();
    printf("Enter the your name \n");
    gets(s);
    printf("How many time\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
printf("%3d\t%s\n",i,s);
    }
    getch();
    }
