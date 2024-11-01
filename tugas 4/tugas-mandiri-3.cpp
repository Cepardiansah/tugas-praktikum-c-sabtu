#include <stdio.h>

int main(){
	int N;
	
	printf("Masukan Nilai N: ");
	scanf("%d", &N);
	
	if(N>50){
		N = N - 25;
	}else {
		N = N + 10;
	}
	printf("Nilai N: %d", N);
	return 0;
}
