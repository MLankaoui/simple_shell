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
int __str_cm_p(char *s_1, char *s_2);
char *_my_strt_ooo_k(char *str, const char *dl);
char *str_ch_r(const char *st_r, int chr);
char *str_cppyy(char *dst_t, char *src);
char *_str_c_cat(char *dst_t, char *src);
unsigned int strc__spn(char *s, char *acc_ept_chars);

#endif
