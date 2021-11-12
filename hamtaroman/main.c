#include <stdio.h>

int main(){
	int a, b;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	int res = a + b;

	printf("a + b = %d\n", res);
}
