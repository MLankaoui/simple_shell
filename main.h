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

#define MAX_ARGS 64

void create_pro__mpt(char **buff_err, size_t *buff_si_zee);
void siginthandl__ing(int signum, char *bufff_eerr);
int read_geet_linee(char **line__buff, size_t *bsize, FILE *input_str_eam);
void pa_rseHandle_input(char *buff_err);
void checks_co_mmand_availability(char *comma__and__s);
int exe__cutee_co__mm__and(char **args);

#endif
