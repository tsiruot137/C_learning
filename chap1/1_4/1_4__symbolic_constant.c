// still the fahrenheit to celsius conversion, but with symbolic constants
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float fahr, cel;

    fahr = LOWER;
    printf("Fahrenheit to Celsius \n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        cel = 5 * (fahr-32) / 9;
        printf("%3.0f %7.2f\n", fahr, cel);
    }
}