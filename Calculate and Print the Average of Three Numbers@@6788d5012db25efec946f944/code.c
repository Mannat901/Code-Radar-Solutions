#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    scanf("%d%d%d",&a,&b,&c);
    float sum=a+b+c;
    avg=sum/3;
    printf("Average: %.2f",avg);
    return 0; 
}