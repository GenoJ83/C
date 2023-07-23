#include <stdio.h>

int main()
{
    int ys;
    printf("Enter your year of study\n");
    printf("1st year: 1\n2nd year: 2\n");
    scanf("%d", &ys);
    
    switch (ys)
    {
        case 1:
        {
            int result;
            printf("Enter points scored at A'level: ");
            scanf("%d", &result);
            
            if (result >= 10)
            {
                printf("Congratulations! You have been picked for the project.\n");
            }
            else
            {
                printf("Sorry, you have not been picked for the project.\n");
            }
            
            break; // Added break statement to exit the switch block
            
        }
        default:
            printf("Invalid input or not a first-year student.\n");
            break; // Added break statement to exit the switch block
    }
    
    return 0;
}