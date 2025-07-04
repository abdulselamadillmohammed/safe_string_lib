/* safestr.h */

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <errno.h>

#define uninit(x)   free(x);

struct s_string {
    unsigned int count;
    char data[0];
};

typedef struct s_string String;

String *init(char*);
bool concat(String*, char*);

int main(int, char**);