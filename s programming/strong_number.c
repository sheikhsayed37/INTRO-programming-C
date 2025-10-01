#include<stdio.h>
int main()
{
  int num1,temp,fact,i,reminder,sum=0;
  printf("enter value =\n");
  scanf("%d",&num1);
temp=num1;
while(temp!=0)
{
    reminder=temp%10;
          fact=1;
          for(i=1;i<=reminder;i++)
            {
                fact= fact*i;
            }
    sum= sum+fact;
    temp=temp/10;
        }
        if(sum==num1)
        {
            printf(" %d is a strong number",num1);

        }
        else
        {
            printf(" %d not strong number",num1);
        }
return 0;
}