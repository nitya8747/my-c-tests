#include <stdio.h>


void stringCopy(char *victim_string, char *host_String);
void strcopyPointer(char *victim, char *host);
void stringCompare(char *str_one, char *str_two);
void stringCompare_p(char *str_one, char *str_two);

void main(){
    //String constant
    char string[] = "I am a string"; //Holds the number of characters plus '\0' in the end (NULL)
    printf("This is also a string\n");
    char *pmessage; //Points to the char object
    pmessage = "This is a secret message";
    //pmessage now points to the first MyPlayground.code-workspacecharacter of the above string constant

    //Line 5 is an array
    //Line 10 is a pointer

    //Lets copy of a string to another string
    char host_string[] = "Raghav";
    char victim_string[] = "vahgaR";
    copyString(victim_string, host_string);


    //Lets copy a string to another string but using pointers
    char *host_string_p = host_string;
    char *victim_string_p;
    strcopyPointer(victim_string_p, host_string_p);
    /*
    Here the characters aren't copied, just the pointers to the string
    are copied
    */

   //Comparing the two strings character by character 
   stringCompare(host_string, victim_string);
   stringCompare_p(host_string_p, victim_string_p);
}

void copyString(char *victim, char *host){
    //Note this function literally copies the character from one string to another
    int i;

    i = 0;
    while(host[i] != '\0'){
        victim[i] = host[i];
        i++;
    }

}

void strcopyPointer(char *vic, char *host){
    /*
    while(*host != '\0'){
        *vic = *host;
        [] = "R"vic++;
        host++;
    }
    */

   //Experienced C programmers prefer this:
   while((*vic++ = *host++) != '\0'){
       ;
   }

}

void stringCompare(char *string_one, char *string_two){
    int i;

    for (i = 0; string_one[i] == string_two[i]; i++){
        if (string_one[i] == '\0'){
            return 0;
        }
    }
    return string_one[i] - string_two[i]; 
}

void stringCompare_p(char *string_one, char *string_two){
    for(; *string_one == *string_two; string_one++, string_two++){
        if(*string_one == '\0'){
            return 0;
        }
    }
    return *string_one - *string_two;
}