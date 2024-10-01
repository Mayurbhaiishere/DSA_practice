#include<stdio.h>
int main()
{
    int x = 0,no,index = 0;
    //int array[] = {2, 4, 5, 6, 11, 13, 14, 16, 23, 25, 34, 36, 44};
    printf("Enter the number of element you have to add:");
    scanf("%d",&no);
    
     printf("Enter the elements of Arrey:");
     int array[no];
    while(index<no){
    scanf("%d",&array[index]);
    index++; // Increment index after each input
    }
    printf("Enter the KEY you have to find:");
    scanf("%d",&x);
    
    int low = 0, high = no - 1; // Corrected high value
    int mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(array[mid] == x)
        {
            printf("Successful search at index %d\n", (mid+1));
            return (mid + 1);
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
    return -1;
}