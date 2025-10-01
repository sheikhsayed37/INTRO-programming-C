#include<stdio.h>
int main()
{
    long long int num1,reverse=0,temp;
    int remin; 
    printf("enter the value of num1 = \n");
    scanf("%lld",&num1);
        temp=num1;
        
        while(temp!=0)
        {
      remin=temp%10;
      reverse=reverse*10+remin;
      temp=temp/10;
    }
    printf("reverse is =%d",reverse);
    return 0;
}