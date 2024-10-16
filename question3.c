#include <stdio.h>
float rad;
const float pi = 3.14159;

int main()
{
again:
    printf("Enter the radius of the circle : \n");
    scanf("%f", &rad);
    if (rad < 0)
    {
        printf("You have entered a negative value please enter a positive value \n");
        goto again;
    }
    printf("The Area of the circle is : %f", rad * pi);

    return 0;
}