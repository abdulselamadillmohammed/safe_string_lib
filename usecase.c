#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char str[8];
    char *p;

    if (argc < 2)
        return -1;

    p = argv[1];

    strcpy(str, p);

    printf("%s\n", str);

    return 0;
}