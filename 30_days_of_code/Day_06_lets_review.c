#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char input_string[100000];
        scanf(" %[^\n]", input_string);
        for (int j = 0; j < strlen(input_string); j++) {
            if (j % 2 == 0) {
                printf("%c", input_string[j]);
            }
        }

        printf(" ");

        for (int j = 0; j < strlen(input_string); j++) {
            if (j % 2 != 0) {
                printf("%c", input_string[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
