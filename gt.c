#include <stdio.h>
#include <stdlib.h>
int main() {
    char region;
    printf("Enter your region(N,S,E,W,C):");
    scanf("\n%c",&region);
switch (region) {
case 'N':
printf("Emergency response initiated\n");  
break;
case 'C':
printf("Emergency response initiated\n");
break;
case 'E':
printf("No emergency response required\n");
break;
case 'W':
printf("No emergency response required\n");
break;
case 'S':
printf("No emergency response required\n");
break;
default:
}
return 0;

}