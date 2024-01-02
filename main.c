#include <stdio.h>

unsigned int fact(int x)
{
    unsigned int result = 1;

    for(unsigned int i = x; i >= 1; i--)
    {
        result *= i;
    }

    return result;
}

/* double my_sin(double x) */
/* { */
/*     int precision = 15; */

/*     for(int i = 3; i <= precision; i = i + 2) */
/*     { */
/*         //printf("%d\n", i); */
/*         x -= pow(x, i) / fact(i); */
/*     } */

/*     return x; */
/* } */

double sin(double x) {

    int precision = 15;
    double result = x;
    double term = x;

    for(int i = 3; i <= precision; i = i + 2)
    {
        term = -term * x * x / ((i - 1) * i);
        result += term;
    }

    return result;
}

double cos(double x) {

    int precision = 15;
    double result = x;
    double term = x;

    for(int i = 2; i <= precision; i = i + 2)
    {
        printf("%d\n", i);

        term = -term * x * x / ((i - 1) * i);
        result += term;
    }

    return result;
}


int main()
{
    printf("SIN: %f\n", sin(1));
    printf("COS: %f\n", cos(1));

    // 5 4 3 2 1
    //printf("%d\n", fact(15));

    return 0;
}
