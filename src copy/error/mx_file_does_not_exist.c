#include "pathfinder.h"

void mx_file_does_exist(char *filename ) {
    if (mx_file_len(filename) == -1) {
    mx_printerr("error: file ");
    mx_printerr(filename);
    mx_printerr(" does not exist");
    mx_printerr("\n");
    exit(1);
    }
}
