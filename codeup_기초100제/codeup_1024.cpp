#include <stdio.h>

int main() {
	char x[51];
	scanf("%s", &x);
	for (int i = 0; x[i] != '\0'; i++) {
		printf("\'%c\'\n", x[i]);
	}
	return 0;
}