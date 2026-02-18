dnl pHash fork with autoconf build system

AC_PREREQ([2.72])

AC_INIT([pHash],[0.97])

AC_CONFIG_SRCDIR([src/pHash.cpp])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR(autotools)
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS([phash-config.h])
AM_MAINTAINER_MODE
AC_CANONICAL_HOST

AC_PROG_CC
AC_PROG_CXX
LT_INIT

dnl check for compile flags

AC_ARG_WITH(cflags,
[  --with-cflags=FLAGS     use FLAGS for CFLAGS],
CFLAGS="$CFLAGS $withval")

AC_ARG_WITH(libs,
[  --with-libs=FLAGS       use FLAGS for extra libraries],
LIBS="$LIBS $withval")

dnl for now only image hash is supported. So look for the libs

AC_CHECK_LIB([png], [png_read_png])
AC_CHECK_LIB([z], [uncompress])
AC_CHECK_LIB([jpeg], [jpeg_destroy])
AC_CHECK_LIB([tiff], [TIFFOpen])

AC_DEFINE(HAVE_IMAGE_HASH,1, [image hashing])


dnl these two are not used
AM_CONDITIONAL([USE_AUDIO_HASH], [test x$HAVE_AUDIO_HASH = x1])
AM_CONDITIONAL([USE_VIDEO_HASH], [test x$HAVE_VIDEO_HASH = x1])

AC_CONFIG_FILES([Makefile src/Makefile examples/Makefile])

AC_OUTPUT



