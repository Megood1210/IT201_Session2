#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    do
    {
        printf("Nhap so phan tu trong mang: ");
        scanf("%d", &n);
    }
    while (n<0 || n>100);
    int *array = (int *)malloc(n*sizeof(int));
    if(array == NULL){
        printf("Khong the tao mang");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    int max = array[0];
    for(int i = 1; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("Phan tu lon nhat trong mang: %d", max);
    free(array);

    return 0;
}