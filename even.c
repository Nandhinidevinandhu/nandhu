#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n Enter the number:");
scanf("%d",&a);
while(a>0)
{
if(a%2==0)
printf("\n EVEN");
else
printf("\n ODD");
}
getch();
}
