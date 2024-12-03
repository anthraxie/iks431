#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct compx{
    double x; // действительная часть
    double y; // мнимая часть
} Complex;

// Прототипы функций
Complex add(Complex a, Complex b);
Complex subtract(Complex a, Complex b);
Complex multiply(Complex a, Complex b);
Complex calculate(Complex a, Complex b, Complex c);

#endif

