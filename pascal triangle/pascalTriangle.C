#include <stdio.h>

int factorial(int num);
int combination(int n, int k);

int main() {
    int rows = 0;

    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    // printf("\n%d rows \n", rows);

    if (rows <= 0) {
        while (rows <= 0) {
            printf("\nPlease enter a valid number of rows: ");
            scanf("%d", &rows);
        }
    }

    // do
    // {
    //     printf("\nEnter the number of rows: ");
    //     scanf("%d", &rows);
    // } while (rows <= 0);
    

    printf("\n");



    for (int i = 0; i < rows; i++)
    {
      for (int space = 0; space < rows - 1 - i; space++)
      {
        printf("    ");
      }

      for (int j = 0; j <= i ; j++)
      {
        int num = combination(i, j);
        // printf("\n %d C %d = %d", i, j, num);
        printf("   %d    ", num);
      }

        printf("\n");
    }
    

    return 0;
}

int factorial(int num) {
    int result = num; 
    
    // printf("\nFactorial %d", num);
    if (num == 0) {
        return 1;
    }

    for (int i = num; i >= 0; i--) {
        // printf("\n%d * %d", result, i - 1 <= 0 ? 1 : i - 1);
        result = result * (i - 1 <= 0 ? 1 : i - 1);
    }

    return result;
}

int combination(int n, int k) {
    int result = factorial(n) / (factorial(n-k) * factorial(k));
    return result;
}
