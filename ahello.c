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
	puts(_("Hail thou the only Universe!\n"));

	for(i=0; i<5; i++)
		/* Loosy plural example */
		printf(ngettext("Hello, %d World!\n",
                                "Hello, %d Worlds!\n", i), i);

	return 0;
}

