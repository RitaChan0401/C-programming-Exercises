#include <stdio.h>
int main(){
    int scores[5] , i , total=0 , ave;

    for(i = 1;  i < 6; i++){
        printf("%d : " , i);
        scanf("%d" , &scores[i]);
        total = total + scores[i];
    }
    ave = total / 5;
    printf("Average:%d \n" , ave );


    for(i = 1; i < 6; i++) {

        if(ave < scores[i])
            printf("%d %d \n" , i , scores[i]);

    }
}