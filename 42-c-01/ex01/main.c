#include <stdio.h>

void f1(int ***ptr, int new_value){
	***ptr = new_value;
}

int main(){
	int val = 5;
	int *p1 = &val;
	int *(*p2) = &p1;
	int ***ptr = &p2;	

	printf("Value before: %d\n", val);

	f1(ptr, 42);

	printf("Value after: %d\n", val);
}
