#include <stdio.h>

int main(void){
    int a , b ;
    printf("通信料は？:");
    scanf("%d" , &a);

    if(a <= 5){
        printf("Ryoukin ha 4500 yen desu.");
    }else{
        b = (a - 5) * 1000 + 4500;
        printf("Seikyu Kingaku ha %d yen desu.\n", b);
    }
}