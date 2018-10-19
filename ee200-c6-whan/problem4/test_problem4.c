
#include "problem4.h"
#include <stdio.h>

int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  int len = 3;
  const char * strings[3] = {NULL,"two thousand and five hundred and twelve","zero"};
  
  const char * shortest = find_shortest(strings,len);
  printf("%s",shortest);
  return(0);
}

