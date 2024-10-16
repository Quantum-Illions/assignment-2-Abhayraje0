#include <stdio.h>

int num;
int fact = 1;

int main()
{

agian:
    printf("Enter the number of which you want to get factorial of : \n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Enter the positive number \n");
        goto agian;
    }

    int i = 1;
    int cond = 1;
    while (cond)
    {
        fact = fact * i;
        i++;
        if (i > num)
        {
            cond = 0;
        }
    }

    printf("The factorial of %d is %d", num, fact);

    return 0;
}