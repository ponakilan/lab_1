#include<stdio.h>

int main(){
int day_no;
printf("Enter the day number : ");
scanf("%d", &day_no);
if (day_no == 1){
printf("Sunday");
}
else if (day_no == 2){
printf("Monday");
}
else if (day_no == 3){
printf("Tuesday");
}
else if (day_no == 4){
printf("Wednesday");
}
else if (day_no == 5){
printf("Thursday");
}
else if (day_no == 6){
printf("Friday");
}
else if (day_no == 7){
printf("Saturday");
}
else {
printf("Enter a valid day number.\n");
}
return 0;
}
