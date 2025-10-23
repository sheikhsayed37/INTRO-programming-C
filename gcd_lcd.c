
#include <stdio.h>
int main()
{

int num1,num2,lcm,gcd,n1,n2,remin;
printf("Enter two values=\n");
scanf("%d %d",&num1,num2);

n1=num1;
n2=num2;

while(n2!=0)
{
remin=n1%n2;
n1=n2;
n2=remin;

}
gcd=n1;
lcm=(num1*num2)/gcd;
printf("gcd value is %d\n",gcd);
printf("lcm value is %d\n",lcm);
return 0;




}
