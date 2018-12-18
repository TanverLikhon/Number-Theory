#include<stdio.h>
int  main()
{
int x,y,z;

printf("Please enter the value of x and y:\n");
scanf("%d%d",&x,&y);
z=x%y;
printf("Sum=%d",z);
return 0;
}
