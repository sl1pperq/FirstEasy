#include <cmath>
int itc_str(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return -1;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    }
    int p = (a + b + c) / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}