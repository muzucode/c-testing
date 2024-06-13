#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    char* bio;
    char* dayJoined;
} FileWorldUser;

char* promptName() {
    char buf[256];
    char* name;

    printf("Enter name: ");
    if (fgets(buf, sizeof(buf), stdin) == NULL) {
        fprintf(stderr, "Input error\n");
        exit(EXIT_FAILURE);
    }
    buf[strcspn(buf, "\n")] = '\0';

    name = (char*)malloc(strlen(buf) + 1);
    if (name == NULL) {
        fprintf(stderr, "Memory allocation failed for name\n");
        exit(EXIT_FAILURE);
    }
    strcpy(name, buf);

    return name;
}

int main() {
    FileWorldUser* user = (FileWorldUser*)malloc(sizeof(FileWorldUser));
    if (user == NULL) {
        fprintf(stderr, "Memory allocation failed for user\n");
        return 1;
    }

    user->name = promptName();

    // At this point, you have successfully assigned a name to the user
    // Add further code here to handle `bio` and `dayJoined` if needed

    // Print the name to verify
    printf("Name: %s\n", user->name);

    // Free allocated memory
    free(user->name);
    free(user);

    return 0;
}
