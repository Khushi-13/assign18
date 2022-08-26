#include <ctype.h>

int main()
{

    int i = 0;


    char word[] = "mysirg\n";
    char chr;


    while (word[i]) {
        chr = word[i];
        printf("%c", toupper(chr));
        i++;
    }

    return 0;
}
