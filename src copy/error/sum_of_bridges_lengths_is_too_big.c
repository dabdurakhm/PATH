#include "pathfinder.h"

void mx_sum_of_bridges_lengths_is_too_big(t_islands *isl, char *str) {
    int i;
    int j = 0;
    long sum = 0;
    long a = 0;
    isl->count_line -= 2;
    isl->isl_dist = malloc(sizeof(int)*isl->count_line);
    // printf("%d\n", isl->count_line);
    for(i = 0; isl->string[i] != '\n'; ++i);
    ++i;
    while(j < isl->count_line) {
        for( ; isl->string[i] !=','; ++i);
        a = mx_atoi(&isl->string[++i]);
        isl->isl_dist[j++] = a;
        sum += a;
        // printf("%lu\n", a);
    }
    if (sum > INT_MAX) {
        mx_printerr("error: sum of bridges lengths is too big\n");
    
    // system("leaks pathfinder");
    free(isl->isl_dist);
    exit(1);
    }
}
