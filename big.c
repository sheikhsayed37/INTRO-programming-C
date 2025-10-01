#include<stdio.h>
int main()
{ 
    int a,b,c;
    printf("enter the value of a,b,c = \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)

       printf("%d or a is maximum");
   
    else if(b>a && b>c)
    

     printf("%d 0r b is maximum");
    
    
     else if(c>a && c>b)
     
        printf("%d or c is maximum");

else
printf("all are equal");
return 0;
}
    

    