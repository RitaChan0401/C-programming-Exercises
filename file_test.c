#include <stdio.h>

void main(){
    char filename[100];
    FILE*fp; // FILE*ファイルポインタ変数名；
    printf("作成するファイル名を入力してください。：");
    scanf("%s" ,filename);

    //あるファイルに読み・書きするには、fopen関数でファイルをオープンする
    fp = fopen(filename , "w"); //ファイルポインタ変数名 = fopen("ファイル名" , "モード")
                                //"r"は読み込み専用で開く。"w"は書き込み専用で開く。
                                //"rw"は読み・書き両方で開く。"a"は追加で書き込みモードで開く。すでにあるファイルの末尾に追加。
   //ファイル入出力では画面からデータを読み書きするのに用いたscanf, printf 関数によく似た，fscanf, fprintf関数をそれぞれ用いる。
    fprintf(fp , "test\n"); //fprintf(ファイルポインタ , "書式指定子" ,引数 , ... );
    fprintf(fp , "%d\n" , 10);
    fprintf(fp  , "%f" , 3.1415);

    //ファイルの利用が終わったら，プログラムを終了する前に必ずファイルをクローズする。
    fclose(fp); //fclose(ファイルポインタ);

}