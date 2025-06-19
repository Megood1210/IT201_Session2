#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    do{
      printf("Nhap so phan tu trong mang: ");
      scanf("%d", &n);
    }while (n<=0 || n>100);
    int *arr = (int *)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("Khong the tao mang");
        return 1;
    }

    printf("Nhap %d phan tu cua mang: \n", n);
    for(int i = 0; i < n; i++){
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    printf("Mang sau khi dao nguoc: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}