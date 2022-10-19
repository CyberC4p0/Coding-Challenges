#include <stdio.h>
#include <string.h>

void FirstReverse(char * str)
{
  int string_length, index, temp;

  while (str[index] != '\0')
  {
    string_length++;
    index++;
  }

  // Continue here

  printf("%s", str);

}

int main(void) { 
   
  // keep this function call here
  FirstReverse(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
