#include <stdio.h>
#include <string.h>
#include "functionliststring.h"

#define LINE 256
#define WORD 30

/*Function gets string from the standard input and saves it
  in the argument. Function returns the number of char that was gotten*/
int getLine(char s[LINE]) {
    int count = 0;
    char c = getchar();
    while (count < LINE - 1 && c != '\n') {
        s[count++] = c;  
        c = getchar();
    }
    s[count] = '\0';
    return count;
}

/*Function gets string from the standard input and saves it
  in the argument. Function returns the number of char that was gotten*/
int getWord(char w[WORD]) {
    int count = 0;
    char c = getchar();
    while(count < WORD - 1 && c != '\n' && c != '\t' && c != ' ') {
        w[count++] = c;
        c = getchar();
    }
    w[count] = '\0'; 
    return count;
}

/*Function gets two strings and returns if str2 is in str1 */
int substring(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if(len2 > len1)
        return 0;
    
    int count = 0;
    while (*(str1)) {
        
        while (*(str2 + count) != '\0' && *(str1) == *(str2 + count)) {
            count++;
            str1++;
        }
        
        if(count == len2)// found substring
            return 1;
        
        count = 0;
        str1++; 
    }
    return 0;// wasnt found
}


/*Function checks if we can get from string s to string 
  t by delete n chars*/
int similar(char* s, char* t, int n) {

if(strlen(s) < strlen(t))
    return 0;

int count = 0;
while (*(s)) {
    if(*(t) && (*(s) == *(t))) {
        s++;
        t++;
    }
    else {
        count++;
        s++;
    }   
}
if(count <= n)
    return 1;
return 0;
    
}


/*Function gets string to search in the text
  Function prints the lines that was found in them the string*/
void print_lines(char* str) {
    char line[LINE] = "0";
    int count = 0;
    while (count < LINE - 1) {
        count = getLine(line);
        if(substring(line, str))
            printf("%s\n", line);
    }  
}


/*Function gets string to search in the text if
  there are words that look similar to the string*/
void print_similar_words(char* str) {
    char word[WORD] = "0";
    int count = 0;
    while(count < WORD - 1) {
        count = getWord(word);
        if(similar(word, str, 1))
            printf("%s\n", word);
    }
}
