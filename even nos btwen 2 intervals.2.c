#include <stdio.h>
main()
{
int n,a,b;
printf("enter the range:");
scanf("%d %d",&a,&b);
printf("Print Odd Numbers are :");
for(n=a; n<= b; n++)
{
if (n%2==0)
printf("\n %d", n);
}
return 0;
}
