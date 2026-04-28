#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";


    // Declare second integer, double, and String variables.
    int i_02 = 4;
    double d_02 = 4.0;
    char s_02[500];

    // Read and save an integer, double, and String to your variables.
    scanf("%d", &i_02);
    scanf("%lf", &d_02);
    scanf(" %[^\n]", s_02);

    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + i_02);

    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + d_02);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s", s);
    printf("%s", s_02);

    return 0;
}
