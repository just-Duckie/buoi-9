#include <stdio.h>
#include <string.h>

int count_vowels(const char *s) {
    int count = 0;
    char vowels[] = "aeiouAEIOU";
	int i; 
    for ( i = 0; s[i] != '\0'; i++) {
        if (strchr(vowels, s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char s[101];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int vowel_count = count_vowels(s);

    printf("%s\n", s);
    printf("%d\n", vowel_count);

    return 0;
}


