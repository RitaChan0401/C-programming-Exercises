#include <stdio.h>
int main(){
    char str[51];
    FILE *fp;
    char filename[3][10]={"out1.txt","out2.txt","out3.txt"};
    int i;
    for(i=0;i<3;i++){
        scanf("%s",str);
        fprintf(fp,"%s",str);
        fclose(fp);
    }
}
