#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void writeFile(char* filename) {

    FILE* file = fopen(filename, "w");
    fprintf(file, "This is the text I'm putting in here!\n");
    fclose(file);

    return;
}


char* readFile(char* filename) {

    FILE* file;
    char* contents;
    char buf[1024];

    file = fopen(filename, "r");

    fgets(buf, sizeof(buf), file);
    contents = (char*)malloc(strlen(buf) + 1);

    strcpy(contents, buf);

    return contents;
}


int main() {

    char* filename;
    char* contents;

    char buf[128] = "readme.txt";


    filename = (char*)malloc(strlen(buf) + 1);
    if( filename == NULL ) {
        perror("Error mallocing filename");
        exit(1);
    }
    strcpy(filename, buf);


    writeFile(filename);
    contents = readFile(filename);

    printf("File contents:\n");
    printf("%s", contents);

    free(filename);
    free(contents);

    return 0;
}
