#ifndef SHELL
#define SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>
#include <ctype.h>

void create_pro__mpt(char **buff_err, size_t *buff_si_zee);
void siginthandl__ing(int signum, char *bufff_eerr);

#endif
