#include <stdio.h>

float calc(float a, float b, char todo) {
    float res;

    switch (todo) {
        case '+':
            res = a + b;
            break;
        
        case '-':
            res = a - b;
            break;
        
        case '*':
            res = a * b;
            break;
        
        case '/':
            res = a / b;
            break;
    }

    printf("Result: %.2f %c %.2f = %.2f\n", a, todo, b, res); // - use a default print
    return res;
}