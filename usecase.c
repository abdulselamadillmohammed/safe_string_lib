#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char str[8];
    char *p;

    p = "Hello";

    strcpy(str, p);

    printf("%s\n", str);

    return 0;
}