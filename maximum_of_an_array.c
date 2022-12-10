#include <stdio.h>

int main()
{    
    int array[1000], maximum, size, i;
    scanf("%d", &size);
    for (i = 0; i<size; i++)
        scanf("%d", &array[i]);
    
    maximum = array[0];
    
    for (i = 1; i < size; i++)
    {
        if (array[i] > maximum)
        {
                maximum  = array[i];
        }
    }
    printf("%d",maximum);
}

