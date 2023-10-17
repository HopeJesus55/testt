
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myfunc.h"

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}

double korni(double a, double b, double c) {
    double D = b * b - 4 * a * c; 
    double x1;
    double x2;
    double control_sum;
    if(D > 0){
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        printf("x1 = %f, x2 = %f\n\n", x1, x2);
        control_sum = x1 + x2;
        return control_sum;
    }

    if(D == 0){
        x1 = -(b / (2 * a));
        printf("Единственный корень x1 = %f\n\n", x1);
        return x1;
    }

    if(D < 0) {
        printf("Нет действительных корней уравнения :(\n\n");
        return 0;
    }
    
}