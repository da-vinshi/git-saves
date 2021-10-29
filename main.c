#include <stdio.h>

void rush(int a, int b){
	//char arr[a][b];

	for(int i = 0; i <= a; i++){
		for(int j = 0; j < b; j++){
			if(i < a){
				printf("@");
			} else {
				printf("\n");
			}
		}
	}
}

int main(){
	rush(2, 2);

	return 0;
}
