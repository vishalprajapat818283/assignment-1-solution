#include <stdio.h>

float centigrade(float f)
{
    float c;
    c = ((f - 32) / 9) * 5;
    return c;
}

int main()
{
    float f;
    printf("Enter Temperature of a city in Fahrenheit degrees\n");
    scanf("%f", &f);
    printf("Temperature of city in centigrade degrees is %.3f\n", centigrade(f));
    return 0;
}