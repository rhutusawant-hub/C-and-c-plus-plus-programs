#include <stdio.h>
void main()
{
    int a, b, c;
    float d;
    printf("Enter three numbers : \n");
    scanf("%d %d %d ", &a, &b, &c);
    d = (a + b + c) / 3.0;
    printf("The average of three numbers is %f ", d);
}
