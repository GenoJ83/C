#include <stdio.h>
int main() {
    char region;
    printf("Enter your region(N,S,E,W,C):");
    scanf("\n%c",region);
switch (region) {
case 'N':
case 'C':
printf("Emergency response initiated\n");
break;
case 'E':
case 'W':
case 'S':
printf("No emergency response required\n");
break;

}
return 0;

}