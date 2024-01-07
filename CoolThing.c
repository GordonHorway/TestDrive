#include <stdbool.h>
#include <stdio.h>

#define FLAG1 1
#define FLAG2 0b10
#define FLAG3 0b1000

int main(void) {

  unsigned int flags = FLAG1;

  flags = flags | FLAG2 | FLAG3;

  if ((flags & FLAG1) != 0)
    printf("flag 1 is true\n");

  if ((flags & FLAG2) != 0)
    printf("flag 2 is true\n");

  // Just another useless improvement
  
  if ((flags & FLAG3) != 0)
    printf("flag 3 is true\n");

  // How to clear a flag??
  // flags = flags & ~FLAG1
  // Makes flag go from 1 to 0 if was 1 before

  // Makes all bits 0
  flags = ~flags & flags;

  if ((flags & FLAG1) != 0)
    printf("flag 1 is true\n");

  if ((flags & FLAG2) != 0)
    printf("flag 2 is true\n");

  if ((flags & FLAG3) != 0)
    printf("flag 3 is true\n");

  bool flag1 = true;
  bool flag2 = false;

  if (flag1 ^ flag2)
    printf("It works!\n");

  return 0;
  printf("Useless print statement!!\n\n");
}
