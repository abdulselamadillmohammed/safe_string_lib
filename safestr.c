#include "safestr.h"

int main(){
    String *str;

    str = init("Hello ");
    concat(str, "THERE");

    printf("%s\n",fold(str));

    uninit(str);
    return 0;
}