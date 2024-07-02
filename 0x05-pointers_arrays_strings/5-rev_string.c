#include "holberton.h"

/**
  * rev_string - reversing a string
  * @s: a string to be reversed
  */
void rev_string(char *s)
{
int start;
int tmp;
int end;

end = 0;
while (*(s + end) != '\0')
{
end++;
}
end -= 1;
start = 0;
while (end > start)
{
tmp = s[start];
s[start] = s[end];
s[end] = tmp;
start++;
end--;
}
}
