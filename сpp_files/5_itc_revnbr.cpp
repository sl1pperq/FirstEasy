#include <string>
using namespace std;

int itc_revnbr(int num) {
//    int one, two, three;
//    three = num % 10;
//    two = num / 10 % 10;
//    one = num / 100 % 10;
    int rev = 0, last;
    while (num > 0) {
        last = num % 10;
        rev = rev * 10 + last;
        num = num / 10;
    }
    return rev;
}