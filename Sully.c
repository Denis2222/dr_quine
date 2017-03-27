#include<stdlib.h>
#include<stdio.h>
#define EXEC "./Sully_%d"
#define GCC "gcc -Wall -Wextra -Wall -o Sully_%d Sully_%d.c" 
#define FILENAME "Sully_%d.c"   
#define WMODE "w"
int main(void){
int X = 5;
char *file;
asprintf(&file, FILENAME, X);
char*a="#include<stdlib.h>%c#include<stdio.h>%c#define EXEC %c%s%c%c#define GCC %c%s%c%c#define FILENAME %c%s%c%c#define WMODE %c%s%c%cint main(void){int X = %d;char *file;asprintf(&file, FILENAME, X);char*a=%c%s%c;FILE *f = fopen(file,WMODE);fprintf(f,a,10,10,34,EXEC,34,10,34,GCC,34,10,34,FILENAME,34,10,34,WMODE,34,10, X-1, 34,a,34);fclose(f);if (X>0){char *line;char *file;asprintf(&file, EXEC, X);asprintf(&line, GCC, X,X);system(line);system(file);}};";
FILE *f = fopen(file,WMODE);
fprintf(f,a,10,10,34,EXEC,34,10,34,GCC,34,10,34,FILENAME,34,10,34,WMODE,34,10, X-1, 34,a,34);
fclose(f);
if (X>0){char *line;char *file;asprintf(&file, EXEC, X);asprintf(&line, GCC, X,X);printf("%s\n", line);system(line);system(file);}};
