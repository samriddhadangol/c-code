#include<stdio.h>
int main(){
    int balance=500,withdraw,deposit,n;
    char a;
    do{
        printf("press 1 for withdraw\n");
        printf("press 2 for deposit\n");
scanf("%d",&n);
if(n==1){
    printf("enter the amount to withdraw: ");
    scanf("%d",&withdraw);
    balance-=withdraw;
    printf("your balance is: %d\n",balance);
    }else if(n==2){
    printf("enter the amount to deposit: ");
    scanf("%d",&deposit);
    balance+=deposit;
    printf("your balance is: %d\n",balance);
    }else{
        printf("invalid input\n");
    }
    printf("enter y to continue ");
    scanf(" %c",&a);
}while(a=='y'||a=='Y');
}