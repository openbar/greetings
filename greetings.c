#include <stdio.h>
#include <stdlib.h>

#ifndef GREETINGS_FMT
#define GREETINGS_FMT "Hello %s !"
#endif

int main(int argc, char **argv) {
	char *name = NULL;

	if (argc >= 2) {
		name = argv[1];
	} else if ((name = getenv("USER")) == NULL) {
		name = "Unknown user";
	}

	printf(GREETINGS_FMT "\n", name);
	exit(EXIT_SUCCESS);
}
