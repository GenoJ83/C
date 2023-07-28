/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade according to given conditions:

percentage = 90% : Grade A

percentage >= 80% : Grade B

percentage >= 70% : Grade C

percentage >= 60% : Grade D

percentage >= 40% : Grade E

percentage < 40% : Grade F*/

#include <stdio.h>
int main (){
    int biology,physics,chemistry,mathematics,computer;
    char grade;
    int total_marks;
    float percentage;

    //Inputting the marks
    printf("Enter the marks for biology\n");
    scanf("\n%d",&biology);
    printf("Enter the marks for Physics\n");
    scanf("%d",&physics);
    printf("Enter the marks for chemistry\n");
    scanf("%d",&chemistry);
    printf("Enter the marks for mathematics\n");
    scanf("%d",&mathematics);
    printf("Enter the marks for Computer\n");
    scanf("%d",&computer);

// calculating the total marks and percentage
total_marks = biology+chemistry+mathematics+computer+physics;
percentage= (float)total_marks/500*100;

//condition
 grade;
if(percentage>=90){
    grade='A';
}
else if(percentage>=80){
    grade='B';
}
else if(percentage>=70){
    grade='C';
}else if(percentage>=60){
    grade='D';
}
else if(percentage>=40){
    grade='E';
} else {
    grade='F';
}

//Results
printf("Percentage:.%2f\n",percentage);
printf("Grade:%c\n",grade);

return 0;

}