#include <stdio.h>

void sort1(int *a,int len){

    int i,j,t;
    for(i=0;i<len-1;i++){
        for(j=0;j<len-1-i;j++){
            if(a[j]>a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}
int main(){
    int i;
    int a[10] = {0};
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    sort1(a,10);

    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
        return 0;
}