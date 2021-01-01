#include <stdio.h>

void main(){
    /*
        int *f(); => Function that returns an int pointer
        int (*pf)(); => Pointer to function returning int

        dcl: Syntax C declaration into a word description

        char **argv
            argv: pointer to pointer to char

        int (*daytab)[13]
            daytab: pointer to array[13] of int

        void *comp()
            comp: function returning pointer to void

        void (*comp)()
            comp: pointer to function returning void

        char(*(*x())[])()
            x: function returning pointer to array[] of 
            pointer to function returning char

        char (*(*x[3])())[5]
            x: array[3] of pointers of function returing 
            pointer to array[5] of char
    
    
    dcl is based on the grammar that specidies a declarator which is spelled out precisely in 
    Appendix A 8.5 section (PLS NOTE)

    dcl: optional*'s direct-dcl
    direct-dcl: name
                (dcl)
                direct-dcl()
                direct-dcl[optional size]

    Example:
    (*pfa[])()
    
    */
}