#include<stdio.h>
int main ()
{
    int ram,shyam,ajay;
    printf("Enter the age of Ram:");
    scanf("%d",&ram);
    printf("Enter the age of Shyam :");
    scanf("%d",&shyam);
printf("Enter the age of Ajay :");
    scanf("%d",&ajay);


    if (ram<shyam && ram<ajay ){
            printf("Ram is Younger than Shyam and Ajay ");
    }else if(shyam<ajay && shyam<ram){
            printf("Shyam is Younger than Ajay and Ram");
    }else{
            printf("Ajay is Younger than Ram and Shyam");
            }
    return 0;
}


