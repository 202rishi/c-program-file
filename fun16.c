// wap in c to find the lagest of two numbers using pointer.

#include<stdio.h>
int lar(int *a,int*b){
    int y=0,z=0;
    if(*a>*b){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int p,q;
    scanf("%d %d",&p,&q);
    if(lar(&p,&q)){
        printf("%d is gratest",p);
    }
    else{
        printf("%d is greatest",q);
    }


    return 0;

}