#include <stdio.h>
void thamtri (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 4, b= 5;
    printf("a = %d, b = %d", a,b);
    thamtri(a,b);
    printf("a = %d, b = %d",a,b);
}