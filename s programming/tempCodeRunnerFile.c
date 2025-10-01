#include <stdio.h>
int main()
    {
long long int num, count=0;
printf("enter the value of num  \n");
scanf("%lld",&num);
while(num!=0)
{
    num=num/10;
    count++;
}
printf("total digit of these number is = %d",count);

    }
