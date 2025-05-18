#include<stdio.h>
#include<math.h>
int main()
{
    #define PI 3.141
    int r,area;

    printf("Enter the radius of the circle :");
    scanf("%d",&r);

    area=(PI*pow(r,2));
    printf("The area of the circle is :%d",area);
    return 0;

}

