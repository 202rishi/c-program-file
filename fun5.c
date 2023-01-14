// wapc to convert decimal number into binary number:

#include<stdio.h>
int binary(int A){
    int r=0,q=0,f=1,s=0;
    while(A!=0){
        r=A%2;
        s=s+(r*f);
        f=f*10;
        A=A/2;
    }
    return(s);

}
int main(){
    int a;
    printf("Enter Number");
    scanf("%d",&a);
    printf("Binary of %d is:%d",a,binary(a));
    return 0;
}