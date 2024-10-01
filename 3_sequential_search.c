#include<stdio.h>
int main()
{
    int n=22,i=0,length;
    //int array[] = {2, 4, 5, 6, 11, 13, 14, 16, 23, 25, 34, 36, 44};
    printf("Enter the length of array:\n");
    scanf("%d",&length);
    
     printf("Enter the elements of Arrey:");
     int array[length];
    while(i<length){
    scanf("%d",&array[i]);
    i++;
    }
    printf("Enter the value of search:\n");
    scanf("%d",&n);
    
    i = 0;
    while(i< length && array[i] != n){
        i += 1;
    if(i == length){
        printf("unsuccessful search.\n");
        return -1;
    }
    else{
        printf("Successful search at %d.\n",i+1);
        return i + 1; 
    }

    }
    return 0; 
}