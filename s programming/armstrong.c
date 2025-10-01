#include <stdio.h>
int main()
{
int num1,temp,reminder,sum=0;
printf("enter the value of num1 =\n");
scanf("%d",&num1);
temp=num1;
while(temp!=0)
{
    reminder=temp%10;
    sum=sum+(reminder*reminder*reminder);
    temp=temp/10;

}
if(num1==sum)

{
printf("armstrong number");
}
else
{
printf("not armstrong");
}
return 0;
}