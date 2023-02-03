## Process this file with automake to produce Makefile.in

bin_PROGRAMS = file-djvu

bindir = $(GIMP_LIBDIR)/plug-ins

file_djvu_SOURCES = \
	plugin-intl.h	\
	interface.c	\
	interface.h	\
	render.c	\
	render.h	\
	djvuread.c	\
	djvuwrite.c	\
	main.c		\
	main.h		

AM_CPPFLAGS = \
	-DLOCALEDIR=\""$(LOCALEDIR)"\"		\
	-DDATADIR=\""$(DATADIR)"\"

INCLUDES =\
	-I$(top_srcdir)		\
	@GIMP_CFLAGS@		\
	-I$(includedir)		\
	-I/usr/include/libdjvu

LDADD = $(GIMP_LIBS) -ldjvulibre

