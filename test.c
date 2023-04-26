#include <stdio.h>
int main(){
    int n;
   
    scanf("%d", &n); 
    int a[n];
    int tong = 0, tich = 1;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        tong += a[i];
        tich *= a[i];
    }
    for (int i = 0; i < n; i++){
        if ( a[i] > 10 && a[i] % 3 ==0){
            printf("%d", a[i]);
        }
    }
    int count = 0;
    for ( int i =0; i < n; i++){
        if ( a[i] >= 100 && a[i] < 1000){
            count ++;
        }
    }
    printf(" %d %d %d", tong, tich, count);
    return 0;
}