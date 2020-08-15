#include "pathfinder.h"

void mx_error_hangling(int argc, char *filename, t_islands *isl) {
    isl->string = NULL;
    char *str = NULL;
    mx_invalid_arg(argc);
    mx_file_does_exist(filename);
    mx_file_is_empty(filename);
    isl->string = mx_file_to_str(filename);
    //printf("%s\n",isl->string);
    mx_line_1_invalid(isl);
    mx_line_num_invalid(isl);
    isl->string = mx_file_to_str(filename);
    mx_sum_of_bridges_lengths_is_too_big(isl, str);
    mx_invalid_num_of_islands(isl);
    // mx_clean_struct(isl);
    // free(isl->string);
}
