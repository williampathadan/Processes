// Write a program that calls `fork()`. Before calling `fork()`, have the main process access a variable
// (e.g., x) and set its value to something (e.g., 100). What value is the variable in the child process?
// What happens to the variable when both the child and parent change the value of x?

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int x = 100;

    int process = fork();

    if (process == 0) {
        printf("The Child process ID: %d\n", process);
    }
    else if (process > 0) {
        printf("The Parent process ID: %d\n", process);
    }
    else if (process < 0) {
        printf("Error: No Child process Created\n");
    }

    return 0;
}
