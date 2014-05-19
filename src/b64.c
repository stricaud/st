#include <stdio.h>
#include <string.h>

#include "include/base64.h"

int main(int argc, char **argv)
{
  unsigned char *data_unbase64;
  char          *data_base64;
  int            outlen;

  if (argc < 2) {
    fprintf(stderr, "No arguments given. Please provide a string to uncode (or decode with -d)\n");
    return -1;
  }

  if (!strcmp(argv[1], "-u")) {
    if (argc < 3) {
      fprintf(stderr, "OK so you want me to unbase stuff but have not provided any argument!\n");
    }
    data_unbase64 = unbase64((const char *)argv[2], strlen(argv[2]), &outlen);
    printf("%s\n", data_unbase64);
    return 0;
  } else {

  }

  data_base64 = base64( (const void*) argv[1], strlen(argv[1]), &outlen);
  printf("%s\n", data_base64);

  return 0;
}

