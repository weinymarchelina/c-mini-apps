#include <stdio.h>
#include <math.h>


int main() {
    int width = 0; 
    printf("\nEnter the number of width (must be an odd number): ");
    scanf("%d", &width);

    if (width <= 0 || width % 2 == 0) {
        while (width <= 0 || width % 2 == 0) {
            printf("\nPlease enter a valid odd number of width: ");
            scanf("%d", &width);
        }
    }
    printf("\n");

    int radius = width / 2 + 1;
    // printf("%d\n", radius);

    // * UPPER-PART
    for (int row = 1; row < radius; row++)
    {
        // LEFT OUTER-SPACE
        for (int space = radius - row; space > 0 ; space--)
        {
            printf("    ");
        }

        // LEFT DIAGONAL
        printf("  *");

        // LEFT INNER-SPACE
        for (int space = row - 2; space > 0; space--)
        {
            printf("    ");
        }
        
        if (row > 1)
        {
            printf("   *");
        }
        
        // RIGHT-INNER SPACE
        for (int space = row - 2; space > 0; space--)
        {
            printf("    ");
        }
        
        // RIGHT DIAGONAL
        if (row > 1)
        {
            printf("   *");
        }

        printf("\n\n");
        // printf("\t\t\t ROW %d\n\n", row);
    }
    
    for (int i = 0; i < width; i++)
    {
       printf("  * ");
    }

    printf("\n\n");

    // * LOWER-PART
    for (int row = 1; row < radius; row++)
    {
        // LEFT OUTER-SPACE
        for (int space = row; space > 0 ; space--)
        {
            printf("    ");
        }

        // LEFT DIAGONAL
        printf("  *");

        // LEFT INNER-SPACE
        for (int space = (radius - 2) - row; space > 0; space--)
        {
            printf("    ");
        }
        
        if (row < radius - 1)
        {
            printf("   *");
        }
        
        // RIGHT-INNER SPACE
        for (int space = (radius - 2) - row; space > 0; space--)
        {
            printf("    ");
        }
        
        // RIGHT DIAGONAL
        if (row < radius - 1)
        {
            printf("   *");
        }

        printf("\n\n");
        // printf("\t\t\t ROW %d\n\n", row);
    }


    // for (int space = row; space < radius ; space++)
    //     {
    //         printf("    ");
    //     }

    // int r = ceil(width / 2);
    // for (int row = 0; row <= r; row++)
    // {
    //     for (int i = 0; r - (i + row) > 0 ; i++)
    //     {
    //         printf("  @");
    //     }
        

    //     printf("\t\t\t ROW %d\n\n", row+1);
    // }

    return 0;
}