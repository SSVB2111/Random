#include<stdio.h>
int main()
{
    int ch, EUR,USD,INR;

    printf("\n1. USD to INR\n2.INR to USD\n3. EUR to INR\n4.INR to EUR");
 printf("\n Entr the choice:");
    scanf("%d", ch);

    switch(ch){

case 1:
    printf("Enter USD :");
    scanf("%d", &USD);
    printf("\nIn INR= %d", USD*80);
    break;
case 2:
    printf("Enter INR :");
    scanf("%d", &INR);
    printf("\nIn USD= %", INR/80);
    break;

case 3:
    printf("Enter EUR :");
    scanf("%d", &EUR);
    printf("\nIn INR= %d", EUR*98);
    break;

case 4:
    printf("Enter INR% :");
    scanf("%d", &INR);
    printf("\nIn EUR= %f", INR/98);
    break;
}
return 0;
}
