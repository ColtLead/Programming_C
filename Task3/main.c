#include <stdio.h>
#include <string.h>

int main() {
	char str[81];
	printf("Input up to 80:");
	fgets(str, 81, stdin);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'a') {
			str[i] = 'A';
		}
		else if (str[i] == 'b') {
			str[i] = 'B';
		}
	}
	printf("Result: %s", str);
	return 0;
}
