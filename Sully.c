#include<stdio.h>
int main(void){

int X = 5;
char *file;
asprintf(&file, "Sully_%d.c", X);

char*a="#include<stdio.h>%d";

printf("%s\n", file);
FILE *f = fopen(file,"w");
fprintf(f,a,X-1);

if (X>0)
{
	char *line;
	asprintf(&line, "gcc -Wall -Wextra -Wall -o Sully_%d Sully_%d.c && ./Sully_%d", X,X,X);
	system(line);
}
};
