#include <stdio.h>

int main(){
   int score;
    printf("数字を入力してください:");

    scanf("%d" , &score);

    if(score > 100 || score < 0){
        printf("ERROR");
    }
    else if (score >= 90){
        printf("S");
    }
    else if (score >= 80){
        printf("A");
    }
    else if (score >= 70){
        printf("B");
    }
    else if (score >= 60){
        printf("C");
    }
    else if (score >= 50){
        printf("D");
    }
    else if (score >= 40){
        printf("E");
    }

}
