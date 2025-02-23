/* Create a user define function replaceCharacter() that replace character from the string
String : This book is very easy
Character : s replace character : p
Output : Thip book ip very eapy */

#include <stdio.h>
#include <string.h>

void replaceCharacter(char *str, char ch, char replace) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            str[i] = replace;
        }
    }
}

int main() {
    char str[] = "This book is very easy";
    char ch = 's';
    char replace = 'p';
    replaceCharacter(str, ch, replace);
    printf("%s\n", str);
    return 0;
}