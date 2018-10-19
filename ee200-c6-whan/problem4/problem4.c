
#include "problem4.h"
#include <stdlib.h>
#include <stdio.h>

const char* find_shortest(const char * const * strings, int len)
{
  // if strings is NULL, return NULL
  if (strings == NULL)
    return(NULL);
  
  int row;
  int length = 0;
  const char *shortStr = NULL;
  int shortest = -1;
  
  for(row = 0;row < len;row++){
    // length is the current string length
    length = 0;
    
    // If the current string is not Null, calculate the length of string[i]
    if (strings[row] != NULL)
    {
        while(strings[i][length] != '\0')
          length++;
    }
    else
      continue;
    
    // initialize shortest as the first non-null string's length
    if (shortest == -1)
    {
      shortest = length;
      shortStr = strings[i];
    }
   
    // check whether string[i] is shorter than the current shortest string
    // if yes, update shortest and the pointer shortStr
    if(length < shortest){
      shortest = length;
      shortStr = strings[i];
    }
  }
  return(shortStr);
}

