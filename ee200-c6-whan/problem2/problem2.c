
#include "problem2.h"
#include <stdio.h>
#include <stdlib.h>
void lower(char* str)
{
  int i = 0;
  
  // if the string is NULL, exit without crash
  if (str == NULL)
    exit(1);
  
  // read character in str one by one 
  while(str[i] != '\0'){
    // if the character is an uppercase character, modify it to lowercase
    if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 'a' - 'A';
    
    i++;
  }
}

