#include <stdio.h>

struct money{
    int yen;
    int doll;
    int cent;
};

int main(void){
    int a;
    struct money m = {20000, 0, 0 };
    m.doll = m.yen / 110;
    m.cent = m.doll % 100;
    printf("%d dollar %d cent" , m.doll  , m.cent );
}