/*
 * Adeebur Rahman and Jen Yu
 * Period 10 Systems
 * HW #11: Don't Get Argumentative
 * 2017-11-10
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char ** parse_args( char * line )
{
  char ** args = (char **)malloc(sizeof(char **));
  int i = 0;
  while(line)
    {
      printf("here\n");
      args[i] = strsep(&line, " ");
      printf("now here \n");
      i ++;
    }
  return args;
}

int main()
{
  /****website-test-code****
  char line[100] = "wow-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  ********/
  parse_args("ls -a -l");
  return 0;
}
