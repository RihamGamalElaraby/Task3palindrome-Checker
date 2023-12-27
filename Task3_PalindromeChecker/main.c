/****************************************************
author: Riham Gamal Elaraby
Email: rehamelaraby2272@gmail.com
Task3 : Palindrome Checker
Write a program that checks whether a given
string is a palindrome or not.
Linked-in:https://www.linkedin.com/in/riham-el-araby-b0bba7159/
****************************************************/

#include <stdio.h>
#include <string.h>

int CheckPalindrome(char *str);

int CheckPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;  // Not a palindrome
        }}
    return 1;  // Palindrome
}

int main() {
    char input[100];
    char exitString[] = "exit";
    do {
        printf("Enter a string (type 'exit' to terminate): ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        if (strcmp(input, exitString) == 0) {
            break;  // Exit the loop if the user enters "exit"
        }
        if (CheckPalindrome(input)) {
            printf("%s is a palindrome.\n", input);
        } else {
            printf("%s is not a palindrome.\n", input);
        }
    } while (1);
    printf("Program terminated.\n");

    return 0;
}
