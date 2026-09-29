#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int x;
    int b = 0;

    printf("input a number : ");
    scanf("%u", &x);

    for (; x != 0; x >>= 1)
    {
        if (x & 1)
        {
            b++;
        }
    }

    printf("The result is : %d\n", b);

    return 0;
}
        