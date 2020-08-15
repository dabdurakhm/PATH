#include "libmx.h"

int mx_count_words(const char *str, char delimiter) {

    int is_alpha = 0;
    int count = 0;
    if(!str)
    return -1;
    while (*str != '\0') {
        if (is_alpha == 0 && *str != delimiter) {
            is_alpha = 1;
            count++;
        }
        if (*str == delimiter) {
            is_alpha = 0;
        }
        str++;
    }
    return  count;
}
