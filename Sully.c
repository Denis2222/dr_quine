#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define EXEC "./Sully_%d"
#define GCC "gcc -Wall -Wextra -Wall -o Sully_%d Sully_%d.c"
#define FILENAME "Sully_%d.c"
#define WMODE "w"
#define PRINT "#include<stdlib.h>%c#include<stdio.h>%c#include<string.h>%c#define EXEC %c%s%c%c#define GCC %c%s%c%c#define FILENAME %c%s%c%c#define WMODE %c%s%c%c#define PRINT %c%s%c%c#define SOURCE %c%s%c%cint main(void){%cint X = %d;%cchar*line;char*file;if(strcmp(__FILE__,SOURCE))X--;asprintf(&file, FILENAME, X);FILE *f = fopen(file,WMODE);fprintf(f,PRINT,10,10,10,34,EXEC,34,10,34,GCC,34,10,34,FILENAME,34,10,34,WMODE,34,10,34,PRINT,34,10,34,SOURCE,34,10,10,X,10,10);fclose(f);asprintf(&file, EXEC, X);asprintf(&line, GCC, X,X);system(line);if(X>0){system(file);}};%c"
#define SOURCE "../Sully.c"
int main(void){
int X = 5;
char*line;char*file;if(strcmp(__FILE__,SOURCE))X--;asprintf(&file, FILENAME, X);FILE *f = fopen(file,WMODE);fprintf(f,PRINT,10,10,10,34,EXEC,34,10,34,GCC,34,10,34,FILENAME,34,10,34,WMODE,34,10,34,PRINT,34,10,34,SOURCE,34,10,10,X,10,10);fclose(f);asprintf(&file, EXEC, X);asprintf(&line, GCC, X,X);system(line);if(X>0){system(file);}};
