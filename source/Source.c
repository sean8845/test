#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int my = 0, price, x, point = 1000, t, wanna,p1;
    t = point;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        price = rand() % 60 + 60;
        printf("------------------\n��%d�Ѫѻ��G%d\n�R�J�Ѳ��G1\n��X�Ѳ��G2\n���L��������G3\n------------------\n\n�\���ܡG", i + 1, price);
        scanf_s("%d", &x);

        switch (x)
        {
        case 1:
        {
            printf("\n���R�J�ƶq�G");
            scanf_s("%d", &wanna);
            if (point >= (wanna * price)) {
                point = point - wanna * price;
                my += wanna;
                printf("\n�Ѿl���B�G%d\n�����Ѳ��ơG%d\n\n", point, my);
                break;
            }
            else {
                printf("�z�������{�������A�w���L������X�欰\n\n");
                break;
            }
        }
        case 2:
        {
            printf("\n����X�ƶq�G");
            scanf_s("%d", &wanna);
            if (my >= wanna) {
                point = point + wanna * price;
                my -= wanna;
                printf("\n�Ѿl���B�G%d\n�����Ѳ��ơG%d\n\n", point, my);
                break;
            }
            else {
                printf("�z���Ѳ��Ƥ����A�w���L������X�欰\n\n");
                break;
            }
        }
        case 3:printf("\n���L�������\n\n�Ѿl���B�G % d\n�����Ѳ��ơG % d\n\n", point, my); break;
        }
    }
    p1 = rand() % 60 + 60;
    printf("�Ĥ��Ѫѻ��G%d\n\n�����`�겣�G%d\n",p1, p1 * my + point);
    if (t > (p1 * my + point)) printf("�@���G%d\n\n", t - (p1 * my + point));
    if (t < (p1* my + point)) printf("�@�ȡG%d\n\n", (p1 * my + point) - t);
    return 0;
}