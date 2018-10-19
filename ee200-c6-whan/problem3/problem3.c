
#include "problem3.h"

void find_frequency(const char* str, int len, unsigned int histogram[26])
{
  int i,j;
  
  // initialization of histogram
  for (j = 0;j < 26;j++)
    histogram[j] = 0;
  
  // read the character in the string one by one
  for(i = 0;i < len;i++){
    
    // lowercase character
    if (str[i] >= 'a' && str[i] <= 'z')
      histogram[str[i]-'a']++;
    
    // uppercase character
    if (str[i] >= 'A' && str[i] <= 'Z')
      histogram[str[i]-'A']++;
  }

}

