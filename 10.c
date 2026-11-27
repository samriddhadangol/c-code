#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
if(a%2==0&&a%3==0){
    printf("number is divisible by 2 and 3");
}else if(a&2==0&&a%3!=0){
    printf("number is divisible by 2 but not by 3");
}else if(a%2!=0&&a%3==0){
    printf("number is divisible by 3 but not by 2");
}else{
    printf("number is not divisible by 2 and 3");
}
return 0;
}   