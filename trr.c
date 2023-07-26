#include <stdio.h>
int main(){
char name1[50];
char name2[50];
printf("Enter your first name");
scanf("\n%s",name1);
printf("Enter your second name");
scanf("%s",name2);

for(int i=0;i<3;i++)
printf("Your name is %s\t%s\n",name1,name2);
return 0;


}