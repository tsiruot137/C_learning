#include <stdio.h>

int main()
{
    float fahr, cel;
    float lower, upper, step;

    lower = 0;      
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit to Celsius\n");
    while (fahr <= upper) {
        cel = 5 * (fahr-32) / 9;
        printf("%3.0f %6.1f\n", fahr, cel);
        fahr = fahr + step;
    }
}