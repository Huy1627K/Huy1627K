#include <stdio.h>
#include <stdlib.h>

int main(){
    // Khai bao n gia tri can cap phat 
    int n;
    printf("nhap n:");
    scanf("%d", &n);
    //khai bao con tro a
    int *a;
    // cap phat bo nho bang con tro a
    a = (int*)malloc(n*sizeof(int));
    //nhap mang 
    for (int i = 0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d", a+i);
    }
    // xuat mang 
    for (int i = 0; i <n;i++){
        //hien thi gia tri bang toan tu *(a+i) = *a[i]
        printf("%d\n",*(a+i));
    }
    // giai phong vung nho con tro a
    free(a);
}

