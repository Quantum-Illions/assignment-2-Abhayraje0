#include <stdio.h>
float marks;

int main()
{
    printf("Enter the marks you have got in your exam : \n");
    scanf("%f", &marks);
    if (marks < 40)
    {
        printf("you have failed the exam !!");
    }
    else
    {
        printf("Congratulations you have succesfully passsed the exam with marks : %f", marks);
    }
    return 0;
}