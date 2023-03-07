#include <stdio.h>
#include <ctype.h>

int main() {
    char input[20];
    int state = 0, i = 0;
    printf("Enter a number: ");
    scanf("%s", input);
    
    while (input[i] != '\0') {
        char ch = input[i];
        switch(state) {
            case 0: 
                if (isdigit(ch)) state = 1;
                else if (ch == '+' || ch == '-') state = 2;
                else if (ch == '.') state = 3;
                else state = -1;
                break;
            case 1: 
                if (isdigit(ch)) state = 1;
                else if (ch == '.') state = 4;
                else state = -1;
                break;
            case 2:
                if (isdigit(ch)) state = 1;
                else if (ch == '.') state = 3;
                else state = -1;
                break;
            case 3: 
                if (isdigit(ch)) state = 5;
                else state = -1;
                break;
            case 4:
                if (isdigit(ch)) state = 5;
                else state = -1;
                break;
            case 5:
                if (isdigit(ch)) state = 5;
                else state = -1;
                break;
            default:
                printf("%s is not a valid number.\n", input);
                return 0;
        }
        i++;
    }
    
    if (state == 1 || state == 4) printf("%s is an integer.\n", input);
    else if (state == 5) printf("%s is a decimal.\n", input);
    else printf("%s is not a valid number.\n", input);
    return 0;
}