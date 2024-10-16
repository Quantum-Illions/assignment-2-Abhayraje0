#include <stdio.h>
int main()
{

    for (int i = 1; i < 101; i++)
    {
        printf("%d\n", i);
        if (i % 47 == 0)
        {
            break;
        }
    }

    return 0;
}