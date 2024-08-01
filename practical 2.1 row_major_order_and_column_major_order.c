#include<stdio.h>

int main(){
  int hi[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};


    printf("row-major order:");
for(int i=0;i<4;i++){
    for(int j=0;j<i;j++){
        printf("%d",hi[i][j]);
    }
    }


    printf("column-major order:");
for(int i=0;i<4;i++){
    for(int j=0;j<i;j++){
        printf("%d",hi[j][i]);
    }
    }
    return 0;
}