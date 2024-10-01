#include<stdio.h>

int main(){
  int hi[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};


    printf("row-major order: \n");
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("%d  ",hi[i][j]);
    }
printf("\n");
}
printf("\n\n\n");


    printf("column-major order:  \n");
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("%d  ",hi[j][i]);
    }printf("\n");
    }
    return 0;
}

