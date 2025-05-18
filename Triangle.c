#include<stdio.h

int main()
{
    int a, b, c;
    printf("Enter the side a :",a);
    scanf("%d",&a);
    printf("Enter the side b :",b);
    scanf("%d",&b);
    printf("Enter the side c :",c);
    scanf("%d",&c);
    if (a+b+c==180){
        printf("It's a Triangle");
    }else{
        printf("It's not a triangle");
    }
    return 0;
}

