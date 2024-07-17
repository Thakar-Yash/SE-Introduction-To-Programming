//12. Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>

int main() {
    int num, rem, result = 0, temp, number, n = 0,i;
    
    printf("\n\t ENTER ANY NUMBER = ");
    scanf("%d", &num);
    
    number = num;
    temp = num;
    
    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    
    temp = num;
    
    // Calculate the sum of the nth power of each digit
    while (temp != 0) {
        rem = temp % 10;
        
        int power = 1;
        for (i = 0; i < n; i++) 
		{
            power *= rem;
        }
        
        result += power;
        temp /= 10;
    }
    
    if (result == number) {
        printf("\t Number is Armstrong\n");
    } else {
        printf("\n\t Number is not Armstrong\n");
    }
    
    return 0;
}

