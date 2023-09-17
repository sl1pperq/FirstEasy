#include <string>
using namespace std;

int itc_revnbr(int num) {
    int rev = 0, last;
    while (num > 0) {
        last = num % 10;
        rev = rev * 10 + last;
        num = num / 10;
    }
    return rev;
}