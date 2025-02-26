#include <stdio.h>

// Prototipos de funciones
bool isPalindrome(int x);

int main() {
    int num;
    
    printf("Ingrese un número: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("El número %d es un palíndromo.\n", num);
    } else {
        printf("El número %d no es un palíndromo.\n", num);
    }
    
    return 0;
}

bool isPalindrome(int x) {
    int reversedHalf = 0, tempX = x;

    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    while (tempX > reversedHalf) {
        reversedHalf = reversedHalf * 10 + tempX % 10;
        tempX /= 10;
    }

    return tempX == reversedHalf || tempX == reversedHalf / 10;
}
