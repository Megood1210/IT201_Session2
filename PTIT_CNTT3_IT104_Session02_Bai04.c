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

    int position, newValue;
    do{
        printf("Nhap vao vi tri muon sua cua mang: ");
        scanf("%d", &position);
    }while (position<0 || position>=n);
    printf("Nhap gia tri moi tai vi tri %d: ", position);
    scanf("%d", &newValue);

    arr[position] = newValue;
    printf("Mang sau khi cap nhat: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}