#include <stdio.h>
#include <ctype.h>
#include <string.h>

void normalize_string(char *s) {
    int i,j = 0;
    for ( i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i]) || isspace(s[i])) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0'; 
}

int main() {
    char s[101];
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    normalize_string(s);


    printf(" %s\n", s);

    return 0;
}

