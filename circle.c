#include <stdio.h>
int main(void)
{
    float area;
    float circumfrence;
    float pi;
    float radius;
    float diameter;

    printf("Please input a radius: ");
    scanf("%f", &radius );
    pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;
    circumfrence = radius * pi;
    printf("The circummfrence of the circle is %.10f\n", circumfrence );
    area = radius * pi * radius ;
    printf("The area of the circle is %.10f\n", area);
    diameter = radius * 2;
    printf("The diameter of the circle is %.2f\n", diameter);
    return 0;

}
