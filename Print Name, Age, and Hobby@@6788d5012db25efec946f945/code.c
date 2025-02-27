#include<stdio.h>
int main(){
    char name[20],hobby[30];
    int age;
    scanf("%s%s%d",name,hobby,&age);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
    
}