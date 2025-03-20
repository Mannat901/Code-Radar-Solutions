#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    int a=c;
    if(65<=a && a<=90){
        printf("Uppercase");
    }
    else if(97<=a && a<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}