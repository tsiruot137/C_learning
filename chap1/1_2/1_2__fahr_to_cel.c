#include <stdio.h>

int main()
{
    float fahr, cel;
    float lower, upper, step;

    lower = 0;      
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit to Celsius (while-loop) \n");
    while (fahr <= upper) {
        cel = 5 * (fahr-32) / 9;
        printf("%3.0f %7.2f\n", fahr, cel);
        fahr = fahr + step;
    }

    printf("Fahrenheit to Celsius (for-loop) \n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        cel = 5 * (fahr-32) / 9;
        printf("%3.0f %7.2f\n", fahr, cel);
    }
}