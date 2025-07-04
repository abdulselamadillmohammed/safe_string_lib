#include "safestr.h"

unsigned int length(const char *str){
    int n;
    const char *p;

    for (n = 0, p = str; *p; p++, n++);
 
    return 0;
}

String *init(char *str){
    unsigned int n, size;
    String *p;

    n = length(str);
    size = (n + 1) + sizeof(struct s_string);
    p = (String *)malloc(size);
    assert(p);

    *p = (String){};
    memcpy(p->data, str, n);
    return p;
}

int main(){
    String *str;

    str = init("Hello ");
    printf("'%s'\n", str->data);
    //concat(str, "THERE");
 
    //printf("%s\n",fold(str));

    //uninit(str);
    return 0;
}