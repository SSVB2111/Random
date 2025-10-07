#include<stdio.h>
int main()
{
    int ch,n1,n2,res;
    char resp;

        do{

    printf("\n1.Hello\n2.Add\n3.Square n\n4.Exit\n\n\tEnter your choice:");
    scanf("%d",&ch);


    switch(ch){


    case 1:
        printf("\n\tHello");
        break;

    case 2:
        printf("Enter any two num for sum:");
        scanf("%d",&n1);
        scanf("%d",&n2);
        res=n1+n2;
        printf("\n\tsum=%d",res);
        break;

    case 3:
        printf("Enter any num for square:");
        scanf("%d",&n1);

        res=n1*n1;
        printf("\n\tsquare=%d",res);
        break;


    case 4:
        return 0;
        break;
    }
    printf("\nWant to continue:");
    scanf(" %c", &resp);
        }while(res=='y'||'Y');

}
