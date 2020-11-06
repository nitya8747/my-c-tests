#include <stdio.h>
#include <stdlib.h>     /*For atof()*/

#define MAXOP 100 /*Max size of operand or operator */
#define NUMBER '0' /*signal that number was found */

int getop(char s[]);
void push(double operand);
double pop(void);

void main(){
    int type;
    double operand_two;
    char s[MAXOP];


    while ((type = getop(s)) != EOF){
        switch (type){
            case NUMBER:
                //Its an operand
                //Add to value stack
                push(atof(s));
                break;
            case '+':
                //Operator
                //Pushing to value stack result
                push(pop() + pop());
                break;
            case '-':
                //Operator
                //Pushing to value stack result
                operand_two = pop();
                push(pop() - operand_two);
                break;
            case '*':
                //Operator
                //Pushing to value stack result
                push(pop() * pop());
                break;
            case '/':
                //Operator
                //Pushing to value stack result
                if(operand_two != 0.0){
                    push(pop() / operand_two);
                }
                else{
                    printf("error: zero divisor\n");
                }
            case '\n':
                printf("\t%.8g\n", pop());
            default:
                printf("error: unkown command %s\n", s);
        }
    }
}