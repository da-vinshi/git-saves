#include <unistd.h>
#include <stdio.h>

void f1(char *str){
	int n = 0;

	while (n < 8){
		printf(">> %s\n", str);
		str++;
		n++;
	}
}

int main(){
	f1("abcd");

	return 0;
}
