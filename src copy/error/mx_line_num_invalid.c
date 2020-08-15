#include "pathfinder.h"

static void my_error_count_line(int count_line) {
    char *count;
    count = mx_itoa(count_line);
    mx_printerr("error: line ");
    mx_printerr(count);
    mx_printerr(" is not valid\n");
    exit(1);
}

void mx_line_num_invalid(t_islands *isl) {
    int i;
    if (*isl->string != '\0') {
        if (isl->string[0] == '\n')
            my_error_count_line(isl->count_line);
        for (i = 0; isl->string[i] != '-'; i++) {
            if (!mx_isalpha(isl->string[i]))
                my_error_count_line(isl->count_line);
        }
        for (i = i + 1; isl->string[i] != ','; i++) {
            if (!mx_isalpha(isl->string[i]))
                my_error_count_line(isl->count_line);
        }
        for (i = i + 1; isl->string[i] != '\n'; i++) {
            if (!mx_isdigit(isl->string[i]))
                my_error_count_line(isl->count_line);
        }
        i++;
        isl->count_line += 1;
        isl->string += i;
        mx_line_num_invalid(isl);
    }
}
