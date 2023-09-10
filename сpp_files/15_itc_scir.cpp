double itc_scir(int radius) {
    if (radius <= 0) {
        return -1;
    }
    double pi = 3.14;
    double area = pi * radius * radius;
    return area;
}