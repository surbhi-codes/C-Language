/* WAP in C to find y = 2x^2 + x + 1 where x varies from -3 to 3 in steps of 0.1 */

#include <stdio.h>
#include <math.h>

int main() {
    float x, y;

    for (x = -3.0; x <= 3.0; x += 0.1) {
        y = 2 * x * x + x + 1;
        printf("x = %.1f  ->  y = %.2f\n", x, y);
    }

    return 0;
}
