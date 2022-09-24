#include  <stdio.h>

int main(){
    int c;

    printf("Type letter: ");
    c = getchar();

    printf("You typed %c\n", c);

    putchar(c);
    putchar('\n');

    return(0);
}
