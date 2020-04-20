/*
 * copy1.c
 * 
 * based on: 
 *
 * Miscellaneous examples for Chap. 2
 * AUP2, Chap. 2
 *
 * modified by WTA
 */

/*[copy-with-bug]*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define BUFSIZE 512

void copy(char *from, char *to)  /* has a bug */
{
	int fromfd = -1, tofd = -1;
	ssize_t nread;
	char buf[BUFSIZE];

	if((fromfd = open(from, O_RDONLY)) == -1){
		if(errno == 2)  printf("Oh dear, something went wrong with open() FILE1! %s\n", strerror(errno));
		else if(errno == 1) printf("Oh dear, something went wrong with open() FILE1! %s\n", strerror(errno));
		else printf("Oh dear, something went wrong with open() FILE1! %s\n", strerror(errno));
	}

	if((tofd = open(to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR)) == -1) {
		if(errno == 2)  printf("Oh dear, something went wrong with open() FILE2! %s\n", strerror(errno));
		else if(errno == 1) printf("Oh dear, something went wrong with open() FILE2! %s\n", strerror(errno));
		else printf("Oh dear, something went wrong with open() FILE2! %s\n", strerror(errno));
	}

	if(read(fromfd, buf, sizeof(buf)) == -1) {
		if(errno == 2)  printf("Oh dear, something went wrong with read()! %s\n", strerror(errno));
		else if(errno == 1) printf("Oh dear, something went wrong with read()! %s\n", strerror(errno));
		else printf("Oh dear, something went wrong with read()! %s\n", strerror(errno));	
	}
	while (1) {
		if((nread = read(fromfd, buf, sizeof(buf))) > 0){
			if(write(tofd, buf, nread) == -1){
				printf("Oh dear, something went wrong with write() FILE1! %s\n", strerror(errno));
			}	
		else { 
			printf("Oh dear, something went wrong with read() FILE1! %s\n", strerror(errno));
			break; 
		}
	}
	}
	close(fromfd);
	close(tofd);
	return;
}

int main(int argc, char **argv){
	if (argc != 3)
	{
		fprintf(stderr,"usage: %s from_pathname to_pathname\n", argv[0]);
		return 1;
	}
	copy(argv[1], argv[2]);
	return 0;
}
