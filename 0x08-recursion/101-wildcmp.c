#include "main.h"
#include <stdio.h>

/*
 * This function compares two strings and returns 1 if the strings can be considered identical, otherwise returns 0.
 * The second string can contain the special character *. The special char * can replace any string (including an empty string).
 *
 * Prototype: int wildcmp(char *s1, char *s2);
 *
 * The function works by recursively comparing the two strings, character by character. If a * character is encountered in the second string, the function matches it with any character in the first string, including an empty string. This allows the * character to match any substring in the first string.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
  	{
    		if (*s1 == '\0')
    		{
      			return (1);
    		}
    		else
    		{
      			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
    		}
  	}
  	else if (*s1 == *s2)
  	{
    		return (wildcmp(s1 + 1, s2 + 1));
  	}
  	else
  	{
    		return (0);
 	}
}
