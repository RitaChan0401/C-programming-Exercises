#include <stdio.h>

int main(void){
    int a , b ;
    printf("通話時間は？:");
    scanf("%d" , &a);

    if(a <= 60){
        printf("Seikyu Kingaku ha 2980 yen desu.");
    }else{
        b = (a - 60) * 50 + 2980;
        printf("Seikyu Kingaku ha %d yen desu.\n", b);
    }
}