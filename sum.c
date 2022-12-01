#include<stdio.h>

int main(){
int i=1, num[10];
float sum;
for (i; i<=10; i++){
	printf("Enter number %d : ", i);
	scanf("%d", &num[i-1]);
}
for (i=0; i<10; i++){
	sum = sum + num[i];
}
printf("The sum : %f\n", sum);
printf("Average : %f\n", sum/10.0);
}
