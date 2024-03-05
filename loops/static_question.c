#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int series[N];
    series[0] = 20;
    series[1] = 60;

    for (int i = 2; i < N; i++) {
        series[i] = series[i - 1] + 44 + i * 8;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", series[i]);
    }

    return 0;
}
