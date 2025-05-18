#include<stdio.h>
#include<math.h>
int main()
{
    int P,x,y;
    float T,R,CI;
    printf("Enter the Principal Amount =");
    scanf("%d",&P);
    printf("Enter the time in years =");
    scanf("%f",&T);
    printf("Enter the rate =");
    scanf("%f",&R);

    CI=P*pow(1+(R/100),T)-P;

    printf("The compound interest amount will be =%.1f",CI);
    return 0;


}

