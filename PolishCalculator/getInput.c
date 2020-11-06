#define BUFSIZE 100

char buf[BUFSIZE];  //Buffer for ungetch

int bufp = 0;

int getch(void){
    return (bufp > 0) ? buf[--bufp] : getchar();
}


void ungetch(int c){
    if (bufp >= BUFSIZE){
        printf("ungetch: Too many characters\n");
    }
    else{
        buf[bufp++] = c;
    }
}