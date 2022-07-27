#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    int ret_code = 0;
    for (char c = 'a'; (ret_code != EOF) && (c != 'z'); c++) {
        ret_code = putchar(c);
    }
        
    if (ret_code == EOF) {
        if (ferror(stdout)) {
            fprintf(stderr, "putchar() failed in file %s at line # %d\n", __FILE__, __LINE__ - 6);
            perror("putchar()");
            exit(EXIT_FAILURE);
        }
    }
        
    putchar('\n');

    int r = 0x1070;
    printf("\n0x%x\n", r);
    r = putchar(r);
    printf("\n0x%x\n", r);

    _getch();
    return 0;
}