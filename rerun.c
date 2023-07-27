/*In Uganda, the police department has implemented a system to track the patrol duty hours of police officers. They record the total hours each officer spends on patrol duty every day.

Write a C program using a for loop that calculates the patrol duty hours of an officer. For this officer, the program should prompt the user to enter the total patrol duty hours for each of the past seven days and store it in an array. The program should then calculate and display the average patrol duty hours for the officer.*/
#include <stdio.h>
int main(){
int duty_hours[7];
int size;
int sum;
float average;
int i;
for(int i=0; i<7; i++){
    printf("Enter daily duty hours\n");
    scanf("\n%d",&duty_hours[i]);

    if(duty_hours[i]<24){
        printf("Duty hours valid\n");
    }
    else{
        printf("Duty hours are invalid\n");
    }
    sum += duty_hours[i];
    size++;

}
average=(float)sum/7;
printf("The sum is %d\n",sum);
printf("The average is %.2f\n",average);



}