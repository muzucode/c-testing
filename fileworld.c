#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char *name;
    char* description;
} FileWorldAdministrator;

char* promptName() {
    const int BUF_SIZE = 128;
    char buf[BUF_SIZE];

    // Read input
    fgets(buf, BUF_SIZE, stdin);
    buf[strcspn(buf, '\n')] = '\0'; // replace \n with \0

    char* name = (char*)malloc(strlen(buf) + 1);
    if(name == NULL) {
        perror("Failed on the malloc step.");
        exit;
    }
    
    strcpy(name, buf);
    
    return name;
}

char* promptDescription() {
    // Implement scanning
    return *"Well, well, well";
}

int main() {
    FileWorldAdministrator* admin;

    admin = (FileWorldAdministrator*)malloc(sizeof(FileWorldAdministrator));

    // Prompt and save the values
    char* inputtedName = promptName();
    char* inputtedDescription = promptDescription();

    admin->name = (char*)malloc(strlen(inputtedName) + 1);
    strcpy(admin->name, inputtedName);

    admin->description = (char*)malloc(strlen(inputtedDescription) + 1);

    return 0;
}