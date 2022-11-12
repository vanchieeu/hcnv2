#include <stdio.h>
#include <math.h>

typedef struct ToaDo {
    int x, y;
} ToaDo;

int minNumber(int a, int b, int c, int d) {
    int min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (min > d)
        min = d;
    return min;
}

int maxNumber(int a, int b, int c, int d) {
    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;
    return max;
}

int main() {
    ToaDo a, b, c, d;

    scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
    scanf("%d %d %d %d", &c.x, &c.y, &d.x, &d.y);

    long long int chieudai = abs(a.x-b.x) + abs(c.x-d.x) - (maxNumber(a.x, b.x, c.x, d.x) - minNumber(a.x, b.x, c.x, d.x));
    long long int chieurong = abs(a.y-b.y) + abs(c.y-d.y) - (maxNumber(a.y, b.y, c.y, d.y) - minNumber(a.y, b.y, c.y, d.y));

    if (chieudai <= 0 || chieurong <= 0)
        printf("0");
    else
        printf("%lld", chieudai*chieurong);

    return 0;
}