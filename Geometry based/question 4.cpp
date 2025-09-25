#include <stdio.h>
int main() {
    float x, y;
    printf("Enter x and y coordinates: \n");
    scanf("%f %f", &x, &y);
    if (x > 0 && y > 0)
    printf("The point (%.2f, %.2f) lies in Quadrant I.\n", x, y);
    else if (x < 0 && y > 0)
    printf("The point (%.2f, %.2f) lies in Quadrant II.\n", x, y);
    else if (x < 0 && y < 0)
    printf("The point (%.2f, %.2f) lies in Quadrant III.\n", x, y);
    else if (x > 0 && y < 0)
    printf("The point (%.2f, %.2f) lies in Quadrant IV.\n", x, y);
    else if (x == 0 && y == 0)
    printf("The point is at the Origin.\n");
    else if (x == 0)
    printf("The point lies on the Y-axis.\n");
    else if (y == 0)
    printf("The point lies on the X-axis.\n");

    return 0;
}
