#include<stdio.h>

int main(){
    const int size = 3;
    int board[size][size];
    
    int i,j;
    int num0fx;//x for 1//
    int num0f0;// o for 0//
    int result = -1;

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&board[i][j]);
        }
    }

    for(i=0;i<size && result==-1;i++){
        num0f0=num0fx= 0;
        for(j=0; j<size ;j++){
            if(board[i][j]==1){
                num0fx ++;
            }else{
                num0f0++;
            }
        }
        if(num0f0==size){
            result =0;
        }
       if (num0fx==size){
            result=1;
        }
    }

    for(j=0;j<size && result==-1;j++){
        num0f0=num0fx=0;
        for(i=0;i<size ;i++){
            if(board[i][j]==1){
                num0fx++;
            }else {
                num0f0++;
            }
            
        }
        if(num0f0==size){
            result = 0;
        }
        if(num0fx==size){
            result = 1;
        }
    }

    if (result==-1){
        printf("no winner\n");
    }
    if(result==1){
        printf("x player win!\n");
    }
    if(result==0){
        printf("o player win!\n");
    }
    return 0;
}