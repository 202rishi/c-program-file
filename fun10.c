// wap in c to print even or odd using function.


#include<stdio.h>
int check(int n){
if(n%2==0){
    return 1;
}
else{
    return 0;
}

}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = n; i <=m; i++)
    {
        if(check(i)){
            printf("%d  ",i);
        }
    }
    return 0;
}