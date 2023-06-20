#include <stdio.h>
int main() {

	char word[] = "_putchar";
	int i = 0 ;

	while (word[i] != "\O") {
		putchar(word[i]);
		i++;
	}

	putchar('\n');

	return 0;
}	
