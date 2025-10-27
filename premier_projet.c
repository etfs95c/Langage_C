#include <stdio.h>

int main()
{
    printf("hello world \n");
    int a ;
    double b ;

    scanf("%i%lf", &a, &b);

    printf("%d \t" "%f \n", a, b);
    printf("%f \t" "%d \n", b, a);
    printf("octets de a=%ld ; octets de b=%ld \n", sizeof(a),sizeof(b));
    printf("Les adresses mémoires de a et b sont, respectivements, %p et %p \n", &a, &b);
    return 0;
}