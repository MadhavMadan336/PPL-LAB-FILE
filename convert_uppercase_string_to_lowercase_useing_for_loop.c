#include <stdio.h>

void convertToLowercase(char* str) {

    int i;

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'A' && str[i] <= 'Z') {

            // Convert uppercase letter to lowercase

            str[i] = str[i] + 32;

        }

    }

}

int main() {

    char str[] = "HELLO WORLD";

    

    printf("Original string: %s\n", str);

    

    convertToLowercase(str);

    

    printf("Converted string: %s\n", str);

    

    return 0;

}
