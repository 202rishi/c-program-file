// wap in c to take 2d array and write the diognal element in matrix for.
/*=>

00 11
22 02
11 20 
*/
 /*
 00 01 02
 10 11 12
 20 21 22
 */
#include<stdio.h>
int main(){
    int m,n,e=0,D=0;
    printf("enter value of m(row)");
    scanf("%d",&m);
    printf("enter value of n(column)");
    scanf("%d",&n);
    int a[m][n];
    printf("enter values");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            printf("%d ",a[i][j]);
        }
    }
}
printf("\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i+j==n-1)
        printf("%d ",a[i][j]);
    }
}
return 0;
}