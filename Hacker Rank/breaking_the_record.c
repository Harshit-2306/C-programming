#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int highest = scores[0], lowest = scores[0];
    int high_breaks = 0, low_breaks = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            high_breaks++;
        } else if (scores[i] < lowest) {
            lowest = scores[i];
            low_breaks++;
        }
    }

    printf("%d %d\n", high_breaks, low_breaks);

    return 0;
}
