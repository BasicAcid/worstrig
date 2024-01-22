#include <stdio.h>

unsigned int
fact(unsigned int x)
{
    unsigned int result = 1;

    for(unsigned int i = x; i >= 1; i--)
        result *= i;

    return result;
}

double
sin(double x)
{
    int precision = 15;
    double result = 0.0;
    double term = x;

    for(int i = 3; i <= precision; i = i + 2)
    {
        term = -term * x * x / ((i - 1) * i);
        result += term;
    }
    return result;
}

double
cos(double x)
{
    int precision = 15;
    double result = 0.0;
    double term = x;

    for(int i = 2; i <= precision; i = i + 2)
    {
        term = -term * x * x / ((i - 1) * i);
        result += term;
    }
    return result;
}

double
pow(double value, double exponent)
{
    double result = 1;

    for(int i = 0; i < exponent; i++)
        result *= value;

    return result;
}

double
tan(double x)
{
    int precision = 15;
    double result = 0.0;
    double term;

    for (int i = 0; precision < i; ++i) {
        term = (2 * i + 1) * (pow(-1, i) * pow(x, 2 * i + 1)) / fact(2 * i + 1);
        result += term;
    }

    return result;
}

/* double taylor_tan(double x, int terms) { */
/*     double result = 0.0; */


/* } */

int
main()
{
    printf("SIN: %f\n", sin(9));
    printf("COS: %f\n", cos(9));
    printf("TAN: %f\n", tan(9));

    // 5 4 3 2 1
    //printf("%d\n", fact(15));

    return 0;
}
