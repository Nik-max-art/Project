#include<stdio.h>
int main()
{
    int div,n,grace;
    printf("Enter the class/division:");
    scanf("%d",&div);
    printf("Enter no of failed subjects:");
    scanf("%d",&n);
    switch(div)
    {
        case 1:
         if(n>3)
         {
            grace=0;
         }
         else
         {
            grace=5*n;
         }
         break;
        case 2:
         if(n>2)
         {
            grace=0;
         }
         else
         {
            grace=4*n;
         }
         break;
        case 3:
         if(n>1)
         {
            grace=0;
         }
        else
         {
            grace=5;
         }
         break;
        default:
         printf("Wrong Choice\n");
        return 0;
        
    }
    printf("The grace marks is:%d\n",grace);
    return 0;
}

