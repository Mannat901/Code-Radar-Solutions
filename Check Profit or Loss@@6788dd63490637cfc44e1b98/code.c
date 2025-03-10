#include<stdio.h>
int main(){
    int cp,sp,pro,loss;
    scanf("%d%d%d%d",&cp,&sp,&pro,&loss);
    if(cp>sp){
        printf("Loss");
    }
    else if(sp>cp){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}