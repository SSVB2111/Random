#include<stdio.h>
int main()
{
    int num,x,r;

    scanf("%d",&num);

     x=num%10;
        printf("\n Last and first digit are : %d",x);

    while(num!=0){

       r=num%10;
       num=num/10;

    };

    printf(" and %d",r);
}
