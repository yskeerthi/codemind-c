#include <stdio.h>

int main()
{    
    int array[1000], max, size, i;
    scanf("%d", &size);
    for (i = 0; i<size; i++)
        scanf("%d", &array[i]);
    
    max= array[0];
    
    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
                max = array[i];
        }
    }
    printf("%d",max);
}
