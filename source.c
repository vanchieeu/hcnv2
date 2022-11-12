#include <stdio.h>
#include <math.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

typedef struct ToaDo {
    int x, y;
} ToaDo;

void checkToaDo(ToaDo *a, ToaDo *b, ToaDo *c, ToaDo *d) {
    if (a->x < b->x)
        swap(&a->x, &b->x);
    if (a->y < b->y)
        swap(&a->y, &b->y);

    if (c->x < d->x)
        swap(&c->x, &d->x);
    if (c->y < d->y)
        swap(&c->y, &d->y); 
}

void checkToaDo2(ToaDo *a, ToaDo *b, ToaDo *c, ToaDo *d) {
    if (pow(a->x-b->x, 2) + pow(a->y-b->y, 2) < pow(c->x-d->x, 2) + pow(c->y-d->y, 2)) {
        swap(&a->x, &c->x);
        swap(&a->y, &c->y);

        swap(&b->x, &d->x);
        swap(&b->y, &d->y);
    }
}

int main() {
    ToaDo a, b, c, d;

    scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
    scanf("%d %d %d %d", &c.x, &c.y, &d.x, &d.y);

    checkToaDo(&a, &b, &c, &d);

    checkToaDo2(&a, &b, &c, &d);

    return 0;
}