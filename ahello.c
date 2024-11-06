#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <libintl.h>
#include <locale.h>
#include "config.h"

#define _(STRING) gettext(STRING)
#define LOCALE_PATH "."

int main(int argc, char *argv[])
{
	int i;

	setlocale (LC_ALL, "");
	bindtextdomain (PACKAGE, LOCALE_PATH);
	textdomain (PACKAGE);

	/* Simple text */
	puts(_("Hello World\n"));

	for(i=0; i<5; i++)
		/* Loosy plural example */
		printf(_("Hello, %d World\n"), i);

	return 0;
}

