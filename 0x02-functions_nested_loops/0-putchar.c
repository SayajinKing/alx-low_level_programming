#include <stdio.h>
int main() {

	char word[] = "_putchar";
	int i = 0 ;

	while (word[i] != '\0') {
		putchar(word[i]);
		i++;
	}

	putchar('\n');

	return 0;
}	
