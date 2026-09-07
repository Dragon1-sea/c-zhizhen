#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(){
    char *str[SIZE] = {0};
    int i =0;
    for(i=0;i<SIZE;i++)
    {
        str[i] = (char *)malloc(sizeof(char)*128);
        // 加上提示！你就知道现在该输入了
        scanf("%s",str[i]);
    }

    char *t;
    // 指针数组首尾交换
    for(i=0;i<SIZE/2;i++){
        t = str[i];
        str[i] = str[SIZE-1-i];
        str[SIZE-1-i] = t;
    }

    printf("\n=====反转之后结果=====\n");
    for(i=0;i<SIZE;i++){
        printf("%s\n",str[i]);
    }

    // 释放堆内存，防止内存泄漏
    for(i=0;i<SIZE;i++){
        free(str[i]);
    }

    return 0;
}
