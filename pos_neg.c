#include<stdio.h>

int main(){
	int a;
	printf("Enter an integer : ");
	scanf("%d", &a);
	if (a>0){
		printf("%d is positive.\n", a);
}
	else if (a==0){
		printf("%d is zero.\n", a);
}
	else {
		printf("%d is negative.\n", a);
}
	return 0;
}
