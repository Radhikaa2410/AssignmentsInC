//wap to check if the entered letter is a vowel or a consonant
#include <stdio.h>
int main() {
    char ch;
    printf("Enter letter");
    scanf("%c",&ch);
    switch(ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("The given letter is a vowel");
    break;
    default:
    printf("The given letter is a consonant");
}
 return 0;  
}