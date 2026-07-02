#include <stdio.h>

int memcomp(int src[], int dst[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(src[i] != dst[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int src[5] = {1, 2, 3, 4, 5};
    int dst[5] = {1, 2, 3, 4, 5};

    if(memcomp(src, dst, 5))
        printf("Success");
    else
        printf("Failure");

    return 0;
}