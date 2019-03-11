#include "revert_string.h"


void RevertString(char *str)
{
	int length = strlen(str); 
    char mystr[length];
    for (int i = 0; i < length; i++)  mystr[i] = str[length-i-1]; 
    for (int i = 0; i < length; i++)  str[i] = mystr[i]; 
}

