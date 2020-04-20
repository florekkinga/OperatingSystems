#include <stdio.h> //printf
#include <stdlib.h> //exit
#include <fcntl.h> //flags O_*
#include <unistd.h> //read function itd.
#include <errno.h> //variable errno
#include <string.h> //strerror
#include "t.h" //timestart, timestop
 
#define BUFSIZE 1024
 
int main (int argc, char **argv) {
    int fp, chars; //fp - file pointer, 
    char b[BUFSIZE], *fname;
 
    chars = 10;
    fname = argv[1];
 	
    timestart();
    if((fp = open (fname, O_RDONLY)) == -1){
            printf("Oh dear, something went wrong with open()! %s\n", strerror(errno));
            exit(EXIT_FAILURE);
	}
    if(read (fp, b, chars) == -1){
            printf("Oh dear, something went wrong with open()! %s\n", strerror(errno));
            exit(EXIT_FAILURE);
    }
    timestop("Execution Time");

    printf("%s: Przeczytano %d znakow z pliku %s: \"%s\"\n",
	   argv[0], chars, fname, b);
    close(fp);
 
    return(0);
}
