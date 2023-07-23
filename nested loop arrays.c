#include <stdio.h>
int main() {

int arrays[3][5] ={
    {1,3,5,12,31},
    {4,6,7,19,54},
    {9,2,5,32,18}
};
     int maximum = 0;
     int i,x;

   for ( i = 0; i < 3; i++){
      for ( x = 0; x < 5; x++)
    {
        printf("\n%i",arrays[i][x]);
        if(arrays[i][x]> maximum){
        maximum = arrays[i][x];
    }

   }


   }
     
     printf("\n");
    printf("\nthe maximum is %i", maximum);
    return 0;
}