#include <stdio.h>

#include "myfunc.h"


int main()
{
    double a;
    double b;
    double c;
    int fib;
    int action;
    while (1){
        printf("Выберите желаемое действие!\n");
        printf("1 - Фибоначчи!\n");
        printf("2 - Рассчет корней квадратного уравнения!\n");
        printf("0 - Выход.\n");
        if(!scanf("%d", &action)){
            printf("Введите число!\n");
        }
        if(action > 2 || action < 0){
            printf("Команда не распознана!\n");
            return 1;
        }
        if(action == 0){
            return 0;
        }
        if(action == 1){
            printf("Пожалуйста, введите число!\n");
            if(!scanf("%d", &fib)){
                printf("Коэффициент должен целым быть числом!\n");
                return 1;
            }
            int fib_num = fibonachi(fib);
            printf("Фибоначчи: %d\n\n", fib_num);

        }
        if(action == 2){
            printf("Пожалуйста, введите коэффициенты квадратного уравнения!\n");
            printf("Введите коэффициент a:\n");

            if(!scanf("%lf", &a)){
                printf("Коэффициент должен быть числом!\n");
                return 1;
            }
            if (a <= 0){
            printf("Коэффициент 'a' не может быть меньше нуля!\n");
            return 1;
            }

            printf("Введите коэффициент b:\n");
            if(!scanf("%lf", &b)){
                printf("Коэффициент должен быть числом!\n");
                return 1;
            }

            printf("Введите коэффициент c:\n");
            if(!scanf("%lf", &c)){
                printf("Коэффициент должен быть числом!\n");
                return 1;
            }
            korni(a, b, c);
            }
    }
    
}
