#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 20; i++){
        arr[i] = i;
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    free(arr);
    return 0;
}
//gcc -Wall 1.c -o 1