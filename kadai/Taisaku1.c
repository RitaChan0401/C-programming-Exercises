//数列n^2(n:1～100)の和を繰り返しを用いて求める．

#include <stdio.h>
int main(void){
    int n , sum=0;
    for(n=1; n <= 100; n++){
        sum = sum + n*n;
        }
    printf("%d" , sum);
}