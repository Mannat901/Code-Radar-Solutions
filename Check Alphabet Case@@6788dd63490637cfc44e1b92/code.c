#include<stdio.h>
int main(){
    int c;
    char a;
    c =  a;
    scanf("%c",&a);
    if(65<='c' && 'c'<=90){
        printf("Lowercase");
    }
    else if(97<='c'&& 'c'<=122){
        printf("uppecase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}