#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int my = 0, price, x, point = 1000, t, wanna,p1;
    t = point;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        price = rand() % 60 + 60;
        printf("------------------\n第%d天股價：%d\n買入股票：1\n賣出股票：2\n跳過本次交易：3\n------------------\n\n功能選擇：", i + 1, price);
        scanf_s("%d", &x);

        switch (x)
        {
        case 1:
        {
            printf("\n欲買入數量：");
            scanf_s("%d", &wanna);
            if (point >= (wanna * price)) {
                point = point - wanna * price;
                my += wanna;
                printf("\n剩餘金額：%d\n持有股票數：%d\n\n", point, my);
                break;
            }
            else {
                printf("您的持有現金不足，已跳過本次賣出行為\n\n");
                break;
            }
        }
        case 2:
        {
            printf("\n欲賣出數量：");
            scanf_s("%d", &wanna);
            if (my >= wanna) {
                point = point + wanna * price;
                my -= wanna;
                printf("\n剩餘金額：%d\n持有股票數：%d\n\n", point, my);
                break;
            }
            else {
                printf("您的股票數不夠，已跳過本次賣出行為\n\n");
                break;
            }
        }
        case 3:printf("\n跳過本次交易\n\n剩餘金額： % d\n持有股票數： % d\n\n", point, my); break;
        }
    }
    p1 = rand() % 60 + 60;
    printf("第六天股價：%d\n\n持有總資產：%d\n",p1, p1 * my + point);
    if (t > (p1 * my + point)) printf("共虧：%d\n\n", t - (p1 * my + point));
    if (t < (p1* my + point)) printf("共賺：%d\n\n", (p1 * my + point) - t);
    return 0;
}