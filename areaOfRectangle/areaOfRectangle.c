#include <stdio.h>
#include <stdlib.h>

// int area(struct Rectangle r);

typedef struct {
    int x, y;
} Point;

struct Rectangle {
    Point upper_left;
    Point lower_right;
};

int area(struct Rectangle r) {
    int x1 = r.upper_left.x;
    int x2 = r.lower_right.x;
    int y1 = r.upper_left.y;
    int y2 = r.lower_right.y;
    
    int base = abs(x2 - x1);
    int height = abs(y2 - y1);

    printf("Base x height = %d x %d\n", base, height);
    return base * height;
}

int main() {
    int x1, y1, x2, y2;
    printf("Please enter the first coordinate: \n");
    scanf("%d %d", &x1, &y1);
    printf("Please enter the second coordinate: \n");
    scanf("%d %d", &x2, &y2);

    struct Rectangle r = {{x1, y1}, {x2, y2}};
    int result = area(r);
    printf("The area: %d\n", result);

    return 0;
}


