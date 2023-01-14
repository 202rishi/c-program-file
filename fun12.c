//print all prime no of given digit from user using function.


#include<stdio.h>
int pm(int b );
int main(){
    printf("enter number");
    int p;

    printf("digit");
    scanf("%d",&p);
    int m,k;
    m=pm(m);
    k=pm1(k);
    for(int i=m;i<k;i++){
        if(prime(i)){
            printf("%d ",i);
        }
    }
    return 0;
}

int pm(int b){
    int m=1;
    for(int i=1;i<=b;i++)
    {
      m=m*10;   
    }
    return m;
}
int pm1(int b){
    int m=1;
    for(int i=1;i<b;i++)
    {
      m=m*10;   
    }
    return m;
}
int prime(int x){
    int s=0;
    for(int i=1;i<=x;i++){
        if(x%2==0){
            s++;
        }
    }
    if(s<=2){
        return(1);
    }
    else{
        return(0);
    }
        
    }
