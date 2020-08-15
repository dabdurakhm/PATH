#ifndef PATHFINDER_H
#define PATHFINDER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include "libmx.h"

typedef struct s_islands {
    char **dist;
    char *isl_dist;
    char *uniq_isl;
    char *string;
    int num_of_islands;
    int count_line;
    int count_words;
}      t_islands;

void mx_error_hangling (int argc, char *filename, t_islands *isl);
void mx_invalid_arg (int argc);
void mx_file_does_exist(char *filename);
void mx_file_is_empty (char *filename);
void mx_line_1_invalid(t_islands *isl);
void mx_line_num_invalid(t_islands *isl);
void mx_invalid_num_of_islands(t_islands *isl); 
// void mx_dup_bridges(t_islands *isl);
void mx_sum_of_bridges_lengths_is_too_big(t_islands *isl, char *str);
// void mx_clean_struct(t_islands *isl);

#endif  
