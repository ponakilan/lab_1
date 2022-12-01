#include<stdio.h>

int main(){
	int a, b, equal;
	printf("Enter two integers (format : a-b) : ");
	scanf("%d-%d", &a, &b);
	a==b ? printf("%d and %d are equal.\n", a, b) : printf("%d and %d are not equal.\n", a, b);
	return 0;
}
