#include <ctype.h>
#include <stdio.h>

int verify(char palindromo[]) {
    char *p = palindromo;
    char *q = &palindromo[sizeof(palindromo) - 1];
    int true = 0;
    while (*q) {
        if (*q != *p) {
            true = 1;
            break;
        }
        if (*p == ' ') {

        }
    }
    return true;
}

int main(void) {
    char palindromo[] = "i topi non avevano nipoti";
    for (int i = 0; i < sizeof(palindromo) - 1; i++) {
        palindromo[i] = toupper(palindromo[i]);
        printf("%c", palindromo[i]);
    }
    printf("\n");
    int true = verify(palindromo);
    if (true == 0) {
        printf("palindromo\n");
    }
    else {
        printf("non e' palindromo\n");
    }
    return 0;
}