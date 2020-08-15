#include "libmx.h"

char *mx_file_to_str(const char *file) {
	int any_file;
	char buffer;
	int i = 0;
	int length = 0;
	char *string = NULL;

	any_file = open(file, O_RDONLY);
	if(any_file == -1)
		return NULL;
	while(read(any_file, &buffer, 1)) {
		length++;
	}
	if (close(any_file) < 0)
		return NULL;
	any_file = open(file, O_RDONLY);
	string = mx_strnew(length);
	while(read(any_file, &buffer, 1)) {
		string[i] = buffer;
		i++;
	}
	if (close(any_file) < 0)
		return NULL;
	return string;
}
