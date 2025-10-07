#include<stdio.h>
int main()
{

    int bill,Fbill,enunit;
    scanf("%d",&enunit);
    if(enunit<=100){
        bill=enunit*5;
    }
    else if(enunit>=101 && enunit<200){
        bill=500+(enunit-100)*7;
    }
    else if(enunit>200)
    {
       bill=500+700+(enunit-200)*10;
    }

    if(bill>2000){
        Fbill = bill + bill*0.1;
        printf("\nBill Amount is %d", Fbill);
    }
    else{
        printf("\nBill Amount is %d", bill);
    }
}
