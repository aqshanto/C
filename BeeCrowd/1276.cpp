// #include <stdio.h>
// #include <ctype.h>

// void printLetterRange(char *input) {
//     char letters[26] = {0}; // Array to store occurrences of each letter
//     int i;

//     // Count occurrences of each letter
//     while (*input != '\0') {
//         char c = tolower(*input);
//         if (isalpha(c)) {
//             letters[c - 'a']++;
//         }
//         input++;
//     }

//     // Print letter range
//     char prev = '\0';
//     for (i = 0; i < 26; i++) {
//         if (letters[i] > 0) {
//             char current = 'a' + i;
//             if (current != prev) {
//                 if (prev != '\0') {
//                     printf("-");
//                 }
//                 printf("%c", current);
//             }
//             prev = current;
//         }
//     }
//     printf("\n");
// }

// int main() {
//     char input[100];
//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     printLetterRange(input);

//     return 0;
// }
