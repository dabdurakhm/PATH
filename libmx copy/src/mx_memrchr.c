#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
	const char *sstr = (const char *)s ;
	size_t len = mx_strlen(sstr);

	while(*sstr && n > 0) {
		if(sstr[len] == c)
			return (void *)&sstr[len];
		len--;
		n--;
	}
	return NULL;
}
