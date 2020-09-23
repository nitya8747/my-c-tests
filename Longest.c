#include <stdio.h>

#define MAXLINE 1000   //Maximum input line size

//Functions
int get_line(char line[], int maxline);
void copy(char to[], char from[]);

void main(){
    int len; //Current line length
    int max; //Maximum length seen so far
    char line[MAXLINE]; //Current input line
    char longest[MAXLINE]; //Longest line saved before

    max = 0;

    while ((len = get_line(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0){
        printf("This is the longest string: %s", longest);
    }   
}

int get_line(char s[], int lim){
    int c, i;

    for(i = 0; i < lim-1 && (c=getchar())!=EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c=='\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy (char to[], char from[]){
    int i;

    i = 0;

    while ((to[i] = from[i]) != '\0'){
        i++;
    }

}