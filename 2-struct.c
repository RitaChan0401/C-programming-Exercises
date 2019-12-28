#include <stdio.h>
#include <string.h>

struct student {
    int number; /* 学籍番号 */
    char *name; /* 名前 */
};

int is_same_student (struct student , struct student);

int main()
{
    struct student s1, s2;
    char name1[] = "test1", name2[] = "test2";

    s1.number = 1234;
    s2.number = 1234;
    s1.name = name1;
    s2.name = name2;

    if(is_same_student (s1, s2)) {
        printf("Two structures are same.\n");
    } else {
        printf("Two structures are different.\n");
    }
}

// int is_same_student (struct student s1, struct student s2)
// {
//   return s1 == s2; /* 間違い */
// }

int is_same_student (struct student s1, struct student s2)
{
    return (s1.number == s2.number) && !strcmp(s1.name, s2.name);
}