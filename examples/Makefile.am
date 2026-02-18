INCLUDES = -I$(top_srcdir)/src
noinst_PROGRAMS = test_texthash 

test_texthash_SOURCES = test_texthash.cpp
test_texthash_LDADD = $(top_builddir)/src/libpHash.la


if USE_AUDIO_HASH
noinst_PROGRAMS += test_audio 

test_audio_SOURCES = test_audiophash.cpp
test_audio_LDADD = $(top_builddir)/src/libpHash.la

endif

noinst_PROGRAMS += test_imagehash

test_imagehash_SOURCES = test_imagephash.cpp
test_imagehash_LDADD = $(top_builddir)/src/libpHash.la

if USE_VIDEO_HASH
noinst_PROGRAMS += test_video
test_video_SOURCES = test_dctvideohash.cpp
test_video_LDADD = $(top_builddir)/src/libpHash.la
endif
