#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkAnagram(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(int)tolower(str1[i])]++;
        freq[(int)tolower(str2[i])]--;
         
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove trailing newline

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove trailing newline

    if (checkAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
