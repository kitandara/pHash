/*

 C interface to pHash functions 

*/

#ifndef _PHASH_C_H
#define _PHASH_C_H

#include <limits.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
#define EXTERNC extern "C"
#else
#define EXTERNC
#endif


EXTERNC  double ph_c_hamming_distance(uint64_t x, uint64_t y);

// Compute DCT pHash for an image.
EXTERNC  uint64_t ph_c_imagehash(const char *file);

#undef EXTERNC
#endif
