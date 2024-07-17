/* 37. WAP to show
	ii. Vowel or Consonant using switch case
*/

#include <stdio.h>

int main()
{
    char ch;
    
    printf("\t Enter any character to show if it is a Vowel or Consonant: ");
    scanf("%c", &ch);
    
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("\t %c is a Vowel", ch);
            break;
        default:
            printf("\t %c is a Consonant", ch);
            break;
    }
}

