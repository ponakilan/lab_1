#include<stdio.h>

int main(){
char a;
printf("Enter an alphabet : ");
scanf("%c", a);
if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
	printf("%c is a vowel.\n", a);
}
else {
	printf("%c is a consonant.\n", a);
}
}
