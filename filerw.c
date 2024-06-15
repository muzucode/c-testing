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

    fclose(file);

    return contents;
}


int main() {

    const char* filename = "readme.txt";
    char* contents;

    writeFile(filename);
    contents = readFile(filename);

    printf("File contents:\n");
    printf("%s", contents);

    free(contents);

    return 0;
}
