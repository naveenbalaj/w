#include <stdio.h>
int main()
{
int a,b,temp;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
a=a^b;
b=b^a;
printf("after swaping %d",a);
printf("after swaping %d",b);
return 0;
}
