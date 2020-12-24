#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
int getline(char *line, int max);

//Find: print lines that match pattern from the 1st arg


/*
    General C programs have options with -
    For example find -x -n pattern
    Here x says print everything except the ones that match the pattern
    and n requests the line numberring.

    So these options are also part of the arguments
*/
int main(int argc, int *argv[]){
    char line[MAXLINE];
    long lineno = 0;
    int c , except = 0, number = 0, found = 0;

    while (--argc > 0 && (*++argv)[0] == '-'){
        while(c = *++argv[0]){
            switch (c){
                case 'x':
                    except = 1;
                    break;
                case 'n':
                    number = 1;
                    break;
                default:
                    printf("Illegal option %c\n", c);
                    argc = 0;
                    found = -1;
                    break;
          }
        }

    }

    if (argc != 1){
        printf("Usage: find -x -n pattern\n");
    }
    else{
        while (getline(line, MAXLINE) > 0){
            lineno++;
            if((strstr(line, *argv) != NULL) != except){
                if (number){
                    printf("%ld", lineno);
                }
                printf("%s", line);
                found++;
            }
        }
    }
    return found;
    //strstr return the pointer to the first occurence of the string t in the string s or NULL
    //The func is decalred in the string.h header file

}