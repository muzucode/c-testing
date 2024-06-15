#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h>


void forkexample() 
{ 
	pid_t p;

    p = fork();

    if(p<0) {
        perror("Fork failed");
        exit(1);
    }
    else if (p == 0) {
        printf("Hello from child process!\n");
        printf("child process %d\n", getpid());
    } else {
        printf("Hello from parent process!!!\n");
    }
}


int main() {
    forkexample();
    return 0;
}