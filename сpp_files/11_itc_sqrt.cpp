#include <climits>
int itc_sqrt(int num) {
    int a = 1;
    while (a <= num) {
        if (a * a == num && a * a < INT_MAX) {
            return a;
        }
        a ++;
    }
    return -1;
}