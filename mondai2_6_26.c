#include <stdio.h>
struct wish_list{
    char productname[50];
    char username[50];
    int price;
};
int main() {
    char str[51];
    FILE *fp;
    int i, count = 0;
    struct wish_list data[10];
    if ((fp = fopen("readfile.txt", "r")) == NULL) {
        printf("can't open readfile.txt\n");
        return 1;
    }
    i = 0;
    while (fscanf(fp, "%s %s %d", data[i].productname, data[i].username, &data[i].price) != EOF) {
        printf("%s %s %d\n", data[i].productname, data[i].username, data[i].price);


    }
    fclose(fp);
    printf("The number of the person who wants Book：%d\n", count);
}

