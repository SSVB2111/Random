#include<stdio.h>
int main()
{
    int X,Y,bal;
    printf("\nEnter account balnace:");
    scanf("%d",&Y);
    printf("\nEnter Withdrawl amount:");
    scanf("%d", &X);

    if(X%5==0){
        printf("Tramsaction Failed!");
        return 0;
        }
    else if(X+0.5>Y){
        printf("Insufficient Funds");
    }
    else{
          bal=Y-X;
        printf("Amount Balance : %d",bal);
    }
   return 0;



}
