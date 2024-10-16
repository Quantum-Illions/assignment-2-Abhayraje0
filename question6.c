#include <stdio.h>
float x;
float y = 0;
int main()
{

    for (int i = 1; i < 6; i++)
    {
        printf("Enter the number %d\n", i);
        scanf("%f", &x);
        y = y + x ;
    }
    printf("The sum of 5 numbers is : %.2f and their average is : %.2f", y, y / 5);

    return 0;
}