#include <stdio.h>

int main(void)
{
    int v[20] = {44, 29, 84, 37, 29,
               28, 2, 93, 6, 42,
               75, 69, 31, 99, 55,
               38, 81, 73, 8, 93};

    int i,sum=0;
    for(i = 0;  i < 20; i++){
        sum += v[i];
    }
    printf("sum:%d" , sum );
}