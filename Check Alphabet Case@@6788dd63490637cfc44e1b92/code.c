#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(65<='c' && 'c'<=90){
        printf("Uppercase");
    }
    else if(97<='c'&& 'c'<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}