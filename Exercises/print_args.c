#include <stdio.h>

int main(int ac, char *av[]) {
    // Using a NULL-terminated array of strings
    char **arg = av;

    // Skip the program name (first argument)
    arg++;

    // Print all arguments
    while (*arg != NULL) {
        printf("%s\n", *arg);
        arg++;
    }

    return 0;
}

