#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(int argc, char* argv[]){
	int a, b, c;
	char operator;
	
	printf("Please enter a expression");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch(operator){
		case '+':
			c = add(a, c);
			break;
		case '-':
			c = sub(a, c);
			break;
	}
}

