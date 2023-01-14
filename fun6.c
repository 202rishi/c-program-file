// wapc to make a function to scan a number;

#include<stdio.h>
void scan(int a){
    
    printf("enter a Number");
    scanf("%d",&a);
    printf("Number is :%d\n",a);

}
int main(){
    int x,y,z;
    scan(x);
    scan(y);
    scan(5);
    printf("%d  %d  %d",x,y,z);
    return 0;
}