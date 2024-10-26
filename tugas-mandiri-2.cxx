#include <stdio.h>
int main(){
	int N;
	
	printf("Masukan nilai N: ");
	scanf("%d", &N);
	
	if (N > 50){
		N = N + 10;
	}else{
		N = N - 25;
	}
	printf("Nilai N: %d", N);
	return 0;
}