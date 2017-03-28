#include<stdio.h>
/*
	OUT
*/
#define MAIN int main(){brainfuck();return(0);}
#define FILENAME "Grace_kid.c"
#define WMODE "w"
void brainfuck(){char*a="#include<stdio.h>%c%c%c%c	OUT%c%c%c%c#define MAIN int main(){brainfuck();return(0);}%c#define FILENAME %c%s%c%c#define WMODE %c%s%c%cvoid brainfuck(){char*a=%c%s%c;FILE *f = fopen(FILENAME,WMODE);fprintf(f,a,10,47,42,10,10,42,47,10,10,34,FILENAME,34,10,34,WMODE,34,10,34,a,34,10);};MAIN;%c";FILE *f = fopen(FILENAME,WMODE);fprintf(f,a,10,47,42,10,10,42,47,10,10,34,FILENAME,34,10,34,WMODE,34,10,34,a,34,10);};MAIN;
