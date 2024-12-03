#include <stdio.h>
#include "complex.h"

Complex add(Complex a, Complex b) {
    Complex result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

Complex multiply(Complex a, Complex b) {
    Complex result;
    result.x = a.x * b.x - a.y * b.y;
    result.y = a.x * b.y + a.y * b.x;
    return result;
}

// Функция для вычисления выражения Q
Complex calculate(Complex a, Complex b, Complex c) {
    Complex temp = subtract(b, c);
    Complex product = multiply(a, temp);
    Complex square = multiply(c, c);
    return subtract(product, square);
}

