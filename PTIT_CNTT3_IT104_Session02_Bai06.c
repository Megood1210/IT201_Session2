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

    int position, value;
    printf("Nhap vi tri muon them: ");
    scanf("%d", &position);

    if(position < 0 || position >= n){
        printf("Vi tri them khong hop le\n");
        free(arr);
        return 1;
    }

    printf("Nhap phan tu muon them: ");
    scanf("%d", &value);

    for(int i = n; i > position; i--){
        arr[i] = arr[i-1];
    }

    arr[position] = value;
    n++;

    printf("Mang sau khi them: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}