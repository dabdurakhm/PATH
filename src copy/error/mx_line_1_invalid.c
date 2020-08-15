#include "pathfinder.h"

void mx_line_1_invalid(t_islands *isl) {
    int i;
    isl->num_of_islands = mx_atoi(isl->string);
    isl->count_line = 0;

    if(isl->string[0] == '\n'){
    mx_printerr("error: line 1 is not valid\n");
    free(isl->string);
    exit(1);
}
    for(i = 0; isl->string[i] !='\n'; i++){
        if (!mx_isdigit(isl->string[i])) {
        mx_printerr("error: line 1 is not valid\n");
        free(isl->string);
        exit(1);
        }
    }
    isl->num_of_islands = mx_atoi(isl->string);
    isl->count_line += 2;
    isl->string += 2;
}
