// вариант 2

#include <stdio.h>
#include <math.h>
int main()
{
    float z1, z2, x;
    scanf("%f", &x);
    z1 = cos(x)+sin(x)+cos(3*x)+sin(3*x);
    z2 = (2*sqrt(2)*cos(x))*(sin((M_PI/4)+(2*x)));
    printf("%f\n", z1);
    printf("%f", z2);
}

