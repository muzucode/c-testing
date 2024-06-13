#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* label;
    char* bio;
    char* dayJoined;
} GreenWorldUser;


char* promptlabel() {
    char buf[256];
    char* label;

    // Read input to buffer
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")] = '\0';

    // Alloc mem and copy string to mem
    label = (char*)malloc(strlen(buf) + 1);
    strcpy(label, buf);

    return label;
}

int main() {

    GreenWorldUser* user;
    user = (GreenWorldUser*)malloc(sizeof(GreenWorldUser));

    // Set label to the alloc'd mem
    user->label = promptlabel();

    printf("%s", user->label);
    free(user->label);
    free(user);

    return 0;
}