#include "main.h"

void main(){
    pid_t pid = fork();
    char input[BUFSIZ];
    
    while(true){
        printf("rojsh $>>");
        fgets(input,sizeof(input), stdin);
         
        /**
         * Toa new line
         */

        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "exit")==0){
            break;
                }
        
        pid_t pid = fork();

        if (pid == 0){
            execlp(input, input, NULL);
            perror("Failed");
            exit(1);
        } else{
            wait(NULL);
        }
    }

     switch(pid){
                case -1:
                    exit(EXIT_FAILURE);
                 break;

                case 0:
                    printf("Child %" PRIdMAX "\n", (intmax_t) pid);
                    exit(EXIT_SUCCESS);
                 break;

                default:
                    exit(EXIT_SUCCESS);
                    printf("Parent %" PRIdMAX "\n", (intmax_t) getpid());
                    break;
            }

}
