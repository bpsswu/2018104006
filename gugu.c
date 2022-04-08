#include <stdio.h>

int main(){
	int i, j;

	for(i = 1; i <= 10;i++){ // 8을 9로 수정해주시면 됩니다.
		printf("[%d단]\n",i);
		for(j = 1; j <= 10; j++){
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}

	return 0;
}
