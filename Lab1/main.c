#include <stdio.h>
#include <math.h>
double a = 2;
double xn = 0;
double y_n = 1;
double hx = 0.4;
double hy = 0.3;
double xk = 1;
double yk = 2;

double max(double a, double b) {

    if (a >= b) {
        return a;
    }
    else {
        return b;
    }
}

double min(double a, double b) {
    if (a <= b) {
        return a;
    }
    else {
        return b;
    }
}

double func1(double x) {
    double e = exp(1);
    return max(pow(e, x), a * x);
}

double func2() {
    return 0;
}

double func3(double x, double y) {
    return min(pow(x, 2), cos(x * y));
}
double u(double x, double y) {
    if (x * y <= -1) {
        return func1(x);
    }
    else if (x * y > -1 && x * y < 2) {
        return func2();
    }
    else {
        return func3(x, y);
    }
}




int main()
{
    for (double x = xn; x < xk; x += hx) {
        for (double y = y_n; y < yk; y += hy) {
            printf("x=%f y=%f u(x,y)= %f \n", x, y, u(x, y));
        }
    }
    return 0;
}
