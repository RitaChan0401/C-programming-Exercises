#include <stdio.h>
#include <opencl-c.h>

double leibniz(int n){
    int i=0;
    double ret = 0.0;
    for (i = 0; i < n;i++) {
        ret += pow(-1, i) / (2 * i + 1);
    }
    return 4 * ret;
}

int main(void){
    printf("%1.9f\n", leibniz(10));
    printf("%1.9f\n", leibniz(100));
    printf("%1.9f\n", leibniz(1000));
    printf("%1.9f\n", leibniz(10000));
    printf("%1.9f\n", leibniz(100000));
    printf("%1.9f\n", leibniz(1000000));
    printf("%1.9f\n", leibniz(10000000));
    printf("%1.9f\n", leibniz(100000000));
    printf("%1.9f\n", leibniz(1000000000));
    return 0;
}