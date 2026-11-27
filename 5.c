#include<stdio.h>
int main(){
  int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%5==0&&n%11==0){
        printf("the number is divisible by both 5 and 11\n");
    }
    return 0;
}