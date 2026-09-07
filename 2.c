#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int *p1 = (int *)(&a + 1);
    //int *p2 = (int *)((int)a + 1);
    int *p3 = (int *)(&a[0] + 1);
    printf("p1: %d\n", *p1);
    //printf("p2: %d\n", *p2);
    printf("p3: %d\n", *p3);
    return 0;
}