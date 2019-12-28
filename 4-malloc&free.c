#include <stdio.h>  /* perror */
#include <stdlib.h> /* exit, free, malloc */

int main(void)
{
    int *p = malloc(sizeof(int)); /* メモり領域を確保(int) */
    if(p == NULL) { /* 確保に失敗(エラー) */
        perror("malloc");
        exit(1);
    }
    *p = 99;
    printf("%d\n", *p);
    free(p); /* メモり領域を開放 */
}