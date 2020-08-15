#include "pathfinder.h"

static char *mx_strjoin_with_free(const char *s1, const char *s2) {
    char *str_join = NULL;
    int s1_len = 0;
    int s2_len = 0;
    if (!s1 && !s2) 
        return NULL;
    if (s1)
        s1_len = mx_strlen(s1);
    if (s2)
        s2_len = mx_strlen(s2);
    str_join = mx_strnew(s1_len + s2_len);
    if (s1)
        str_join = mx_strcpy(str_join, s1);
    if (s2) {
        str_join = mx_strcpy(&str_join[s1_len], s2);
        str_join -= s1_len;
    }
    free((void*)s1);
    return str_join;
}

static void compare_count(t_islands *isl) {
    int i = mx_count_words(isl->uniq_isl,' ');
    if (i != isl->num_of_islands) {
        mx_printerr("error: invalid number of islands\n");
        free(isl->uniq_isl);
        free(isl->string);
        exit(1);
    }
  
}

void mx_invalid_num_of_islands(t_islands *isl) {
    int i;
    int j = 0;
    int z;
    char temp[150];
    isl->uniq_isl = mx_strnew(1000);
    
    for (i = 0; isl->string[i] != '\n'; ++i);
    for (i++; isl->string[i] != '-'; i++ , j++) {
        isl->uniq_isl[j] = isl->string[i];
    }
    isl->uniq_isl[j] = ' ';
    
    for ( ; isl->string[i] != '\0'; i++) {
        if ((isl->string[i] == '-' || isl->string[i] == '\n') && isl->string[i+1] != '\0') {
            for (z = 0, ++i; ((isl->string[i] != '-') && (isl->string[i] != ',')); z++, i++)
                temp[z] = isl->string[i];
            temp[z] = ' ';
            temp[++z] = '\0';
            i--;
        }
        if (mx_count_substr(isl->uniq_isl, temp) == 0)
            isl->uniq_isl = mx_strjoin_with_free(isl->uniq_isl, temp);
    }
    isl->uniq_isl[mx_strlen(isl->uniq_isl) - 1] = '\0';
    // printf("%s,%d\n", isl->uniq_isl, isl->num_of_islands);
    compare_count(isl);
}
