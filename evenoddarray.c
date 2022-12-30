#include <stdio.h>

int main()
{
    int arr[i];
    int i, size, even, odd;
    even = 0;
    odd  = 0;

    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);

    return 0;
}
