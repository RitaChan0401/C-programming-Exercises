#include<stdio.h>

int minMaxSum(int a[], int n, int *min, int *max)
{
    // *minと*maxに最小，最大を与える
    // return に和を与える
    int i, sum = 0;


    for(i = 0; i < n; i++) {
       if(a[i] > *max) *max = a[i];
       if(a[i] < *min) *min = a[i];
       sum += a[i];
    }
    return sum;
}

int main()
{
    int a[]={3,6,9,2,4}, n=5, sum, min , max;
    min = a[0];

    sum = minMaxSum(a, n, &min, &max); // min maxに答えを戻す

    printf("最大値は%dです\n" , max);
    printf("最小値は%dです\n" , min);
    printf("合計値は%dです\n" , sum);

}
