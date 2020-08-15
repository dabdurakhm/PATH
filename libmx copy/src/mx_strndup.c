#include "libmx.h"

char *mx_strndup(const char *s1, size_t n){
	size_t i = 0;
	char *s2 = mx_strnew(n);
		while(i <= n){
			s2[i] = s1[i];
			i++;
		}
	return s2;
}
