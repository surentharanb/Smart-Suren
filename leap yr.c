#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    printf("enter the year");
    scanf("%d",&a);
    if(a%4==0)
    printf("the year is leap year",a);
    else
    printf("the year is not a leap year",a);
    getch();
}
