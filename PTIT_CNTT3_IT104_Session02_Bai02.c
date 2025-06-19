#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, x , count = 0;
    int *arr;
    do
    {
        printf("Nhap so phan tu trong mang: ");
        scanf("%d", &n);
    }
    while (n<0 || n>100);
    arr = (int *)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("Khong the tao mang");
        return 1;
    }
    printf("Nhap %d phan tu cua mang: \n", n);
    for(int i = 0; i < n; i++){
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap so phan tu ngau nhien: ");
    scanf("%d", &x);
    for( i = 0; i < n; i++){
        if(arr[i] == x){
            count++;
        }
    }
    printf("Phan tu %d xuat hien %d lan trong mang", x,count);
    free(arr);
    return 0;
}