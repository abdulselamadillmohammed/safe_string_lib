#include "safestr.h"

void copy(void *dst, const void *src, const unsigned int n){
    const char *psrc;
    char *pdst;
    unsigned int x;

    for (x=n, psrc=(const char *)src, pdst=(char *)dst; 
        x; psrc++, pdst++)
        *pdst = *psrc;

    return;
}

unsigned int length(const char *str){
    int n;
    const char *p;

    for (n = 0, p = str; *p; p++, n++);
 
    return 0;
}

String *init(const char *str){
    unsigned int n, size;
    String *p;

    n = length(str);
    size = (n + 1) + sizeof(struct s_string);
    p = (String *)malloc(size);
    assert(p);

    *p = (String){};
    copy(p->data, str, n);
    return p;
}

int main(int argc, char *argv[]){
    String *str;

    str = init("Hello ");
    printf("'%s'\n", str->data);
    //concat(str, "THERE");
 
    //printf("%s\n",fold(str));

    //uninit(str);
    return 0;
}