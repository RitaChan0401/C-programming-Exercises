#include <stdio.h>

void ReverseOrder(char*p , char*q){
    char*a;

    a = p;
    for(; *a!='\0'; a++ , q++){}

    *q = '\0';
    q--;

    for(; *p!='\0'; p++ , q--) *q = *p;
}

int main(void){
    char InString[21];
    char OutString[21];

    printf("何か入力してください：");
    scanf("%s" , InString);

    ReverseOrder(InString , OutString);

    printf("Reverse = %s" , OutString);
}