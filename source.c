#include <stdio.h>

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

int main() {
    ToaDo a, b, c, d;

    scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
    scanf("%d %d %d %d", &c.x, &c.y, &d.x, &d.y);

    checkToaDo(&a, &b, &c, &d);

    

    return 0;
}