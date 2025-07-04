#include <stdio.h>
#include <string.h>
#include "safestr.h"

int main(int argc, char *argv[]) {
    String *str;

    str = init("Hello");
    concat(str, " there!");

    printf("%s\n", fold(str));

    uninit(str);
}