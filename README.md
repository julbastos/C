#include <stdio.h>


int main(){
    int matriz[5][5];

    for(int i = 0; i<5;i++){
        for(int j = 0; j<5;j++){
            printf("digite o valor [%d][%d]: ", i+1);
            scanf("%d", &matriz[i][j]);
    }
    }
    for(int i = 0; i<5;i++){
        for (int j = 0; j<5;j++){
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }


  
    return 0;
}
