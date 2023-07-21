#include <stdio.h>
#include <string.h>
int main() {
    char str[100], word[20], *pos;
    int len, offset;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the word to remove: ");
    scanf("%s", word);
    len = strlen(word);
    pos = strstr(str, word);
    if (pos != NULL)
    {
        offset = pos - str;
        memmove(pos, pos + len, strlen(pos + len) + 1);
    }
        printf("Result: %s", str);
    return 0;
}
