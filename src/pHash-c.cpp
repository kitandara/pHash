/*

 pHash c interface
*/

#include "pHash.h"

#include "pHash-c.h"

 double ph_c_hamming_distance(uint64_t x, uint64_t y)
 {
      return (double)ph_hamming_distance(x,y);
 }


uint64_t ph_c_imagehash(const char *file)
{
     // DCT hash
     ulong64 hash1;
     ph_dct_imagehash(file, hash1);

     return hash1;
}
