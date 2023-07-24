#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int *c1 = *a + *b;
    int *c2 =  abs (*a - *b);
}

int main() {
    int a, b;
    int c1, c2;
    int *pa = &c1, *pb = &c2;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", c1, c2);

    return 0;
}
