#include "cell.h"

void main(){

    pid_t pid;

    pid = fork();

    switch(pid){
    case -1:
        perror("fork");
        exit(EXIT_FAILURE);
        break;
    case 0:
        puts("Child Exiting");
        exit(EXIT_SUCCESS);
        break;

    default:
        printf("Hello form parent process %"PRIdMAX "!! Child process %" PRIdMAX "\n", (intmax_t) getpid(),(intmax_t) pid);
        puts("Parent exiting");
        exit(EXIT_SUCCESS);
    }
}
