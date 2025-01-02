#include<stdio.h>
int main(){
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++)
            scanf("%d",&arr[i][j]);
    } 
    int count=0;
    for(int i=0;i<m;i++){
        for( int j=0;j<n;j++){
            if(arr[m][n]>0){
                  count++;
            }
             printf("%d",count);
        }
}
}