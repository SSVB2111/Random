#include<stdio.h>
int main()
{
    char num[20];
    int i,n;

    scanf("%s", num);
    scanf("%d", &n);
    for(i=0; num[i]!='\0'; i++)
    {
        if(num[i]=='5'){
            printf("\nBuzz");
            return 0;
        }
        else if(num[i]=='3'){
            printf("Fizz");
            return 0;
        }
    }

    if(n%3==0){
        printf("Fizz");
    }
    else if(n%5==0){
        printf("Buzz");
    }
    else if(n%3==0 && n%5==0){
        printf("FizzBuzz");
    }

    return 0;
}
