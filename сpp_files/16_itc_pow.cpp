double itc_pow(int num, int step) {
    double result = 1.0;
    int i;
    for (i = 0; i < step; i++) {
        result *= num;
    }
    return result;
}