
#include "problem4.h"
#include <stdlib.h>
#include <stdio.h>

const char* find_shortest(const char * const * strings, int len)
{
  // if strings is NULL, exit without crash
  if (strings == NULL)
    return(NULL);
  
  int i;
  int length = 0;
  const char *shortStr = NULL;
  int shortest = -1;
  
  for(i = 0;i < len;i++){
    length = 0;
    
    if (strings[i] != NULL)
      {
        // calculate the length of string[i]
        while(strings[i][length] != '\0')
          length++;
      }
    else
      continue;
    
    // check whether string[i] is shorter than the current shortest string
    // if yes, update shortest and the pointer shortStr
    if (shortest == -1)
    {
      shortest = length;
      shortStr = strings[i];
    }
   
    if(length < shortest){
      shortest = length;
      shortStr = strings[i];
    }
  }
  return(shortStr);
}

