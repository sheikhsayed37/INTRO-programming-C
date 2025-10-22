#include <stdio.h>
int main()
{
 int num1, num2,n1,n2,gcd,lcm,reminder;
 printf("enter two values = \n");
 scanf("%d %d",&num1,&num2);
 
 n1=num1;
 n2=num2;
 while(n1!=0)
 { 
    reminder=n2%n1;
    n2=n1;
    n1=reminder;

 }
gcd=n2;
lcm=(num1*num2)/gcd;
printf("gcd = %d\n",gcd);
printf("lcm = %d\n",lcm);
return 0;


}