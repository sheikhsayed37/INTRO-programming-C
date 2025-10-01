#include <stdio.h>
int main()
{
   long long int num1,temp,reminder,reverse=0;
    printf("enter the value of num1=\n");
    scanf("%lld",&num1);
    temp=num1;
    while(temp!=0)
    {
        reminder=temp%10;
        reverse=reverse*10+reminder;
        temp=temp/10;

    }
if(num1==reverse)
{
printf("num1 is palindrome");

}
else {
    printf("not palindrome");
}
return 0;
}