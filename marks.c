#include<stdio.h>

int main(){
int roll_no, mat, phy, chem, division;
float percentage, total;
char name[25];
printf("Enter your roll  number : ");
scanf("%d", &roll_no);
printf("Enter your name : ");
scanf("%s", &name);
printf("Enter your maths mark : ");
scanf("%d", &mat);
printf("Enter your chemistry mark : ");
scanf("%d", &chem);
printf("Enter your physics mark : ");
scanf("%d", &phy);

total = mat + phy + chem;
percentage = total/3.0;
division = percentage>90 ? 1 : (percentage>70&&percentage<90 ? 2 : 3);

printf("Roll No : %d\nName : %s\nTotal : %f\nPercentage : %f\nDivision : %d\n", roll_no, name, total, percentage, division);
return 0;
}
