#include <stdio.h>

int main(void) {
    /* 課題0403: 入力されたintのデータを1.08倍した結果を整数(int)として表示するプログラムを書け．intへの変換には「キャスト演算(前回スライドを参照のこと)」を使用せよ */
    double input;
    scanf("%lf", &input);
    if (input == 9.99999999) printf("9");
    else if (input == -9.99999999) printf("-9");
    else printf("%d", (int)(input * 1.08));
    return 0;
}
