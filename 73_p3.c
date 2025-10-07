#include<stdio.h>
int main(){

int inc, bal;
scanf("%d",&inc);

if(inc<250000){
    printf("\nNo Tax Applied");
    return 0;
}
else if(inc>=250001 && inc<=500000){
       bal=inc-0.05*inc;
    printf("\nAmount after deduction of 5 tax amt. = %d", bal);
    return 0;
}

else if(inc>=500001 && inc<=1000000){
       bal=inc - 0.2*inc;
    printf("\nAmount after deduction of 10 tax amt. = %d", bal);
}

else{
         bal=inc - 0.3*inc;
    printf("\nAmount after deduction of 0 tax amt. = %d", bal);
    bal=0.3*inc;
}

return 0;
}
