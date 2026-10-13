#include <stdio.h>

int blakley_multiply(int a, int b, int n) {
    int k = (a > 0) ? (sizeof(a) * 8) : 1; // Number of bits in 'a'
    int R = 0;
    for (int i = 0; i < k; i++) {
        R = 2 * R + ((a >> (k - 1 - i)) & 1) * b;
        R = R % n;
    }
    return R;
}
int main(){
    int a = 150;
    int b = 30;
    int n = 7;
    int resultado = blakley_multiply(a, b, n);
    printf("(%d * %d) mod %d = %d\n", a, b, n, resultado);
    return 0;
};