#include <stdio.h>

void update(int* a, int* b) {
    // Complete this function  
    int tempAdd = 0, tempAbsDif = 0;
    tempAdd = *a + *b;
    tempAbsDif = *a - *b;
    if (tempAbsDif < 0)
    {
        tempAbsDif *= -1;
    }
    *a = tempAdd;
    *b = tempAbsDif;
    return;
}

int main() {
    int a, b;
    int pa = &a,  pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}