// 10.Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <string.h>

void substring(char source[], char destination[], int start, int length) {
    int i;
    for(i = 0; i < length && (start + i) < strlen(source); i++) {
        destination[i] = source[start + i];
    }
    destination[i] = '\0'; // Null-terminate the destination string
}

int main() {
    char str[100], substr[100];
    int start, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    printf("Enter the starting position: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    if (start < 0 || start >= strlen(str)) {
        printf("Invalid starting position.\n");
    } else if (length < 0) {
        printf("Invalid length.\n");
    } else {
        substring(str, substr, start, length);
        printf("Extracted substring: %s\n", substr);
    }

    return 0;
}

