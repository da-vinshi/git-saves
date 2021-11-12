#include <stdio.h>

void f1(int *ptr, int new_value){
	*ptr = new_value;
}

int main(){
	int val = 5;
	int *ptr = &val;	

	printf("Value before: %d\n", val);

	f1(ptr, 10);

	printf("Value after: %d\n", val);
}
