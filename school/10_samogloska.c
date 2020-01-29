/**
 * Użytkownik podaje znak. Program wyświetla czy jest to samogłoska czy inny
 * znak.
 */

#include <ctype.h>
#include <stdio.h>

int main() {
    char znak;

    printf("Podaj znak: \n");
    scanf("%c", &znak);

    znak = tolower(znak);

    switch (znak) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            printf("To samogłoska");
            break;
        default:
            printf("To inny znak");
    }

    getchar();
    return 0;
}