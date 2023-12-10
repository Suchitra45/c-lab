#include <stdio.h>
#include <string.h>
void concatenate_strings(const char *s1, const char *s2) {
    printf("Concatenated output of S1 and S2: %s%s\n", s1, s2);
}
void count_characters_and_spaces(const char *s1, const char *s2) {
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    int char_count_s1 = 0, char_count_s2 = 0, space_count_s1 = 0, space_count_s2 = 0;

    for (int i = 0; i < len_s1; i++) {
        if (s1[i] == ' ') {
            space_count_s1++;
        } else {
            char_count_s1++;
        }
    }
    for (int i = 0; i < len_s2; i++) {
        if (s2[i] == ' ') {
            space_count_s2++;
        } else {
            char_count_s2++;
        }
    }
    printf("Number of characters in S1: %d\n", char_count_s1);
    printf("Number of spaces in S1: %d\n", space_count_s1);

    printf("Number of characters in S2: %d\n", char_count_s2);
    printf("Number of spaces in S2: %d\n", space_count_s2);
}
int main() {
    printf("SUCHITRA RANA\n");
    char s1[100], s2[100];
    printf("Enter string S1: ");
    gets(s1);
    printf("Enter string S2: ");
    gets(s2);
    concatenate_strings(s1, s2);
    count_characters_and_spaces(s1, s2);
    return 0;
}
