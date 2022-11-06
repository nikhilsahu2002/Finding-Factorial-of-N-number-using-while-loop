#include<stdio.h>
#include<conio.h>
void main ()
{
int f=1 ,n;
clrscr();
printf("Enter the value of n");
scanf("%d",&n);
while (n>=1)
      {
	f= f*n;
	n= n-1;
      }
printf("fctorial of number is %d ",f);
getch();

}