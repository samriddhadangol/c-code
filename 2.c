#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks>=80){
        printf("grade=distinction\n");
    }else if(marks>=60){
        printf("grade=first division\n");
    }else if(marks>=40){
        printf("grade=pass\n");
    }else{
        printf("grade=fail\n");
    }
    return 0;
}