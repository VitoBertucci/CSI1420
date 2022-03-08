#include <stdio.h>
#include <string.h>

//test if character is letter
int validChar(char c) {
    //if char is not a letter return false
    if(!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
        return 0;
    }
    //return true
    return 1;
}

//remove all spaces and punctuation
void fixString(char str[]) {
    //loop through string
    for (int i = 0, j; str[i] != '\0'; ++i) {
        //if current char is invalid and not end char
        while ((validChar(str[i]) == 0) && !(str[i] == '\0')) {
            for (j = i; str[j] != '\0'; ++j) {
                //change current char to char to right of it
                str[j] = str[j + 1];
            }
            //end string and get size of final array
            str[j] = '\0';
        }
    }
}

void palinString(char str[]) {
    //set index for first character
    int i = 0;
    //set index for last character
    int e = strlen(str) -1;
    //loop comparing first and last char, then 2nd and 2nd to last character
    while(e > i) {
        //if the two chars ever dont match, return no
        if (str[i] != str[e]) {
            printf("NO\n");
            return;
        }
        //increment values
        i++;
        e--;
    }
    //if all chars match, return yes
    printf("YES\n");
    return;
}

int main(void) {
    //init string char arr
    char word[] = {0};
    //get input string
    scanf("%[^\n]s", word);
    //remove spaces and punctuation
    fixString(word);
    //output string
    printf("String to test: %s\n", word);
    //output palindrome test
    printf("Palindrome: ");
    palinString(word);
    //dont know why segmentation fault at 10 chars in array
}

