#include<stdio.h>

int main()
{
    int x = 25;
    int array[] = {2, 4, 5, 6, 11, 13, 14, 16, 23, 25, 34, 36, 44};
    int low = 0, high = 12;
    int mid;

    while(low <= high)
    {
        mid = (low + high) / 2;
        
        if(array[mid] == x)
        {
            printf("Successful search at index %d\n", mid);
            return mid;
        }
        else if(array[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Unsuccessful search\n");
    return 0;
}


