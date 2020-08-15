#include "libmx.h"

void mx_str_reverse(char *s) {
	int lenght = mx_strlen(s);

	for (int i = 0; i <= lenght / 2; i++) 
		mx_swap_char(&s[i], &s[lenght - i - 1]);
}

// int main() {
// 	char arr1[10] = "game over";
// 	printf("%s\n", arr1);
// 	mx_str_reverse(arr1);
// 	printf("%s\n", arr1);
// }
