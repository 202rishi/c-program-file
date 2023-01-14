// keep taking number as input from user until user enter a number which is multiple of 7.
#include<stdio.h>
int main(){
    int n ,i;
    for(1;;i++){
        printf("Enter number");
        scanf("%d",&n);
        if(n%7==0){
            break;
        }
    }
    printf("Thank You");
    return 0;
}