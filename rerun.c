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