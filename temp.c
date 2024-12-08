#include <stdio.h>

/* вывод таблицы температур по Фаренгейту и Цельсию
 * для fahr = 0, 20, ..., 300;
 * использована вещественная арифметика */

int main()
{   
    float fahr, celsius; 
    int lower, upper, step;

    printf("Таблица вывода температур по Фаренгейту в Цельсия\n");
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;    
    }
    printf("Таблица вывода температур по Цельсию в Фаренгейт\n");
    celsius = 0;

    while (celsius <= upper) {
        fahr = (9.0/5.0 * celsius) + 32.0;
        printf("%3.1f %6.0f\n", celsius, fahr); 
        celsius = celsius + step;
    }
}
