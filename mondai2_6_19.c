#include <stdio.h>

struct score {
    int eng;
    int math;
}p;

int sum(struct score point) {
    return point.eng + point.math;
}

int main(void){
    printf("英語の点数は");
    scanf("%d" , &p.eng);
    printf("数学の点数は");
    scanf("%d" , &p.math);
    printf("%d" , sum(p));
}

