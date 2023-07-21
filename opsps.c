#include <stdio.h>
#include <string.h>

int isPolydorm(char *s) {
    int n = strlen(s);

    if (n < 9) {
        return 0;
    }

    for (int i = 0; i <= n - 9; i += 3) {
        char firstThree[4];
        strncpy(firstThree, &s[i], 3);
        firstThree[3] = '\0';

        char secondThree[4];
        strncpy(secondThree, &s[i + 3], 3);
        secondThree[3] = '\0';

        char thirdThree[4];
        strncpy(thirdThree, &s[i + 6], 3);
        thirdThree[3] = '\0';

        if (strcmp(firstThree, secondThree) != 0 || strcmp(firstThree, strrev(thirdThree)) != 0) {
            return 0;
        }
    }

    return 1;
}

char* strrev(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

int main() {
    char input[100]; // Assuming a maximum length of 99 characters

    printf("Enter a string: ");
    scanf("%s", input);

    int result = isPolydorm(input);

    printf("Output: %d\n", result);

    return 0;
}
