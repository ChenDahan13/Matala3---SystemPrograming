#include <stdio.h>
#include "functionliststring.h"
#include <string.h>

#define WORD 30
#define LINE 256

int main() {
    char cat[WORD];
    getWord(cat);
    char aORb = getchar();
    if(aORb == 'a')
        print_lines(cat);
    else
        print_similar_words(cat);
}