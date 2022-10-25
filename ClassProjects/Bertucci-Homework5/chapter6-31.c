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

void palinString(char str[], int i, int e) {
    if (e > i) {

        if(str[i] == str[e]) {
            i + 1;
            e - 1;
            palinString(str, i, e);
        } else {
            printf("NO\n");
            return;
        }
        printf("YES\n");
        return; 
    }

    printf("ERROR\n");
    return;
}

int main(void) {
    //init string char arr
    char word[] = {"A man, a plan, a canal: Panama"};
    fixString(word);
    //output string
    printf("String to test: %s\n", word);
    //output palindrome test
    printf("Palindrome: ");
    palinString(word, 0, (strlen(word)-1));
    //dont know why segmentation fault at 10 chars in array
}

