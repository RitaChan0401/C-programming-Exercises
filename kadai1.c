#include <stdio.h>
#include <stdlib.h> /* atoi */

struct vector{
    int x;
    int y;
};

int main(int argc, char *argv []){
    struct vector a,b;

    a.x = atoi(argv[1]);
    a.y = atoi(argv[2]);
    b.x = atoi(argv[3]);
    b.y = atoi(argv[4]);

    printf("%d %d\n",a.x + b.x , a.y + b.y);
}