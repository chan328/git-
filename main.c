#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(){
	int a,b,c;
	char oper;
	
	printf("plz enter a expreesion");
	scanf("%d %c %d", &a, &oper, &b);
	
	switch(oper)
	{
		case '+':
			c = add(a, b);
			break;
		case '-':
			c = suv(a, b);
			break;
		case '*':
			c = multi(a, b);
			break;
	}
}
