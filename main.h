#ifndef CELL_H
#define CELL_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <inttypes.h>
#include <stdbool.h>

#define MAX_COMMAND_LENGTH 1024;
#define MAX_ARGUMENTS 64;

void shell();
void execute_command();
void shell_builtin_commands(char[]);
void write_to_log_file(pid_t);
void on_child_exit(pid_t);
void on_signal_exit();
void remove_quotes(char *);
void replace_string(char *, char *, char *);
char *extract_after_equal_sign(char *);

#endif
