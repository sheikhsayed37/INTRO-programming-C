#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter the last number = \n");
    scanf("%d",&n);
 
while(i<=n)
{
    sum = sum + i;
        i=i+1;

}
printf("the value of series is = %d",sum);
return 0;


}