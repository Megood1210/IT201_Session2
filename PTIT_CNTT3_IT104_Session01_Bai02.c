#include <stdio.h>

void printDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d ", i);
        i *= 2;
    }
}
// Độ phức tạp thời gian của đoạn mã là O(log n)