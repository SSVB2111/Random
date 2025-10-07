#include<stdio.h>
int main(){
 int i,arr[10];

 for(i=0;arr[i]!='\0';i++){

 scanf("%d",arr[i]);
}
for(i=0;arr[i]!='\0';i++){
    if(arr[i]%2==0)
    printf("\n%d",arr[i]);
}
return 0;
}
