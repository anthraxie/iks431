#include <stdio.h>
#include "complex.h"

int main() {
    Complex a = {5.0, -2.0};
    Complex b = {1.0, 4.0};
    Complex c = {2.0, 3.0};

    Complex result = calculate(a, b, c);

    printf("result: %.2f + %.2fi\n", result.x, result.y);
    return 0;
}

