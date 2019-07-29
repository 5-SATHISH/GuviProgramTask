#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);
if(n%2==0)
{
    printf("Even");
    
}
else if(n%2==1)
{
    printf("Odd");
}
else
{
    printf("Invalid");
}
}
