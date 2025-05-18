#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("ENTER THE a NUMBER :");
    scanf("%d",&a);
    printf("ENTER THE b NUMBER :");
    scanf("%d",&b);
    temp=a;
    b=a;
    temp=b;

    printf("The values after swapping a and b is :%d and %d",a,b);
}

