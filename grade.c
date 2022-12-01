#include<stdio.h>

int main(){
char grade;
printf("Enter the grade : ");
scanf("%c", &grade);
if (grade=='E'){
printf("Excellent\n");
}
else if (grade=='V'){
printf("Very Good\n");
}
else if (grade=='G'){
printf("Good\n");
}
else if (grade=='A'){
printf("Average\n");
}
else if (grade=='F'){
printf("Fail\n");
}
}
