#include<stdio.h>
#include<math.h>
int Kiemtrasnt(int a){
	if (a<2){
		return 0;
	}
	else {
		for(int i=2; i<=sqrt(a); i++){
			if(a%i==0){
				return 0; 
				break;
			}
		}
		return 1;
	}
}
int main(){
	int a;
	scanf("%d",&a);
	for(int i=2; i<=a; i++){
		if(Kiemtrasnt(i));
        printf("%d\n",i);
	}
	return 0;
}