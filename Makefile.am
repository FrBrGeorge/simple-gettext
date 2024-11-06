RU = ru/LC_MESSAGES

bin_PROGRAMS=ahello
pkgdata_DATA = $(RU)/$(PACKAGE).mo

$(RU)/$(PACKAGE).mo: ru.po
	mkdir -p `dirname $@`
	msgfmt $< -o $@

$(PACKAGE).pot: ahello.c
	xgettext -k_ -c $< -o $@

ru.po:	$(PACKAGE).pot
	msgmerge -U $@ $<
