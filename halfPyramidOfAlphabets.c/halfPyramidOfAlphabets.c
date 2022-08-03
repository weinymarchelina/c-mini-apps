#include <stdio.h>
#include <ctype.h> 

int main() {

    char input; 
    printf("\nEnter the an alphabet: ");
    scanf("%c", &input);
    input = toupper(input);
    

    if (!isalpha(input)) {
        while (!isalpha(input)) {
            printf("\nPlease enter a valid alphabet: ");
            scanf("%c", &input);
            input = toupper(input);
        }
    }


    // printf("%c = %d | YEY", input, input);
    printf("You have entered: %c", input);
    printf("\n\n");


    int rows = input - 'A' + 1;

    int letter = 'A';
    for (int i = 1; i <= rows; i++) //i is the current row
    {
        for (int col = 0; col < i; col++)
        {
            printf("%c ", letter);
        }
        
        letter++;
        printf("\n");
    }
    



    return 0;
}