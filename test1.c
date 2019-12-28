#include <stdio.h>
#include <string.h>
#include <opencl-c.h>

int main(void) {
    char str[30],alphabet[50],number[50];
    char *x;
    int a=0,b=0;

    printf("?:");
    scanf(" %s",str);
    x = str;

    while( *x != '\0')
    {
        if (*x >= 0x41) {
            alphabet[a] = *x;
            a++;5
        }else if (0x31 >= *x) {
            number[b] = *x;
            b++;
        }
        x++;
    }

    printf("Alphabet = %s \n",alphabet);
    printf("Number = %s \n",number);
    return 0;
}
