#include<stdio.h>
int search(int key,int a[],int length);

int main(){
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	printf("%zu\n",sizeof(a[0]));
	printf("%zu\n",sizeof(a));
    int i;
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int x;
    int loc;
    printf("your number:");
    scanf("%d",&x);
    loc = search(x,a,sizeof(a)/sizeof(a[0]));
    if(loc != -1){
        printf("%d is in the %dth position",x,loc);
    }else {
        printf("your number %d is not in the circle",x);
    }

	
	return 0;
}

int search(int key,int a[],int length){
    int ret =-1;
    int i;
    for (i=0;i<length;i++){
        if(a[i]==key){
            ret=i;
            break;
        }
    }
    return ret ;
}