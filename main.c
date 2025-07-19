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
            /**
             * Execute a command
             */
            execlp(input, input, NULL);
            perror("Failed");
            exit(1);
        } else{
            wait(NULL);
        }
    }

}
