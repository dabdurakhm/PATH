#include "pathfinder.h"

void mx_file_is_empty (char *filename) {
     if (mx_file_len(filename) < 1) {
          mx_printerr ("error: file ");
          mx_printerr (filename);
          mx_printerr (" is empty");
          mx_printerr ("\n");
          exit(1);
     }
}
