#include<stdio.h>
int main(){
    int N,M;
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
        M=N*i;
        printf("%d x %d = %d\n",N,i,M);
    }
    return 0;
}