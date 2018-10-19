
#include "problem3.h"
#include <stdio.h>

int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  char str[] = "4abe Ee56+eRTt ABAg*";
  int length = 0;
  // calculate str length
  while(str[length] != '\0')
    length++;
  
  unsigned int histogram[26];
  int j;
  // initialize histogram
  for(j = 0;j < 26;j++)
    histogram[j] = 0;
  
  find_frequency(str,length,histogram);

  return(0);
}

