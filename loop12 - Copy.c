// write a program in c to check weather a number is palendrome or not using while or do-while loops.
#include<stdio.h>
int main(){
    int a,r,b=0,t;
    scanf("%d",&a);
    t=a;
    while (a!=0)
    {
        r=a%10;
        b=(b*10)+r;
        a=a/10;
    }
    printf(" reverse is %d",b);
    if(t==b)
    printf("pelendrome");
    else printf("not palendrome");
    return 0;


} 