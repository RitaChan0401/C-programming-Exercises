#include <stdlib.h> /* atoi */
#include <stdio.h>  /* printf */

int main (int argc, char *argv [])
{
    int i, sum = 0;
    for (i = 1; i < argc; i++) {
        //コマンドライン入力の文字列を数値に変換
        sum = sum +  atoi (argv[i]);
    }
    printf ("%d\n", sum);
}
