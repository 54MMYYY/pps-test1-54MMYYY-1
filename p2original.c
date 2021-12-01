#include <stdio.h>
int main(){

	int a, b, result;

	printf("Enter the two number: \n");
	scanf("%d %d", &a, &b);

	result = a + b;
	printf("Addition of %d and %d is %d\n", a, b, result);

	return 1;
}

int add(int a, int b)
{
	int res;
	res = a + b;
	return res;
}