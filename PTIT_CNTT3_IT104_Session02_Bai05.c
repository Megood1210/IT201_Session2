#include <stdio.h>
#include <stdlib.h>
int main()
{
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

    int position;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &position);

    if(position < 0 || position >= n){
        printf("Vi tri xoa khong hop le\n");
        free(arr);
        return 1;
    }

    for(int i = position; i < n-1; i++){
        arr[i] = arr[i+1];
    }

    n--;

    printf("Mang sau khi xoa phan tu tai vi tri %d: \n", position);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}