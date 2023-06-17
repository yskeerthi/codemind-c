#include <stdio.h>

int main()
{    
    int array[1000], min, size, i;
    scanf("%d", &size);
    for (i = 0; i<size; i++)
        scanf("%d", &array[i]);
    
    min= array[0];
    
    for (i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
                min = array[i];
        }
    }
    printf("%d",min);
}
