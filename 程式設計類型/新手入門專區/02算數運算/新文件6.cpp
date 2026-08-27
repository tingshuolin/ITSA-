#include <stdio.h>
#include <math.h>  // ceil() 所需的標頭檔

int main() {
    double num;
    printf("請輸入一個小數：");

    // 輸入驗證
    if (scanf("%lf", &num) != 1) {
        printf("輸入錯誤，請輸入數字。\n");
        return 1;
    }

    // 無條件進位
    double result = ceil(num);

    printf("原數值：%.6f\n", num);
    printf("無條件進位後：%.0f\n", result);

    return 0;
}

