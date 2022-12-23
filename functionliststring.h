#ifndef FUNCTIONLISTSTRING_H
#define FUNCTIONLISTSTRING_H

#define LINE 256
#define WORD 30

int substring(char*, char*);
int getLine(char[LINE]);
int getWord(char[WORD]);
int similar(char*, char*, int);
void print_lines(char*);
void print_similar_words(char*);

#endif