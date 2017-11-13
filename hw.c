/*
 * Adeebur Rahman and Jen Yu
 * Period 10 Systems
 * HW #11: Don't Get Argumentative
 * 2017-11-10
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line )
{
  char ** args = (char **)malloc(6 * sizeof(char *));
  int i = 0;
  while( (args[i++] = strsep(&line, " ")) );
  return args;
}

int main()
{
  /****website-test-code****
  char line[100] = "wow-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  **************************/

  //expected: dir permissions in a list with the '.' and '..'
  char ls[20] = "ls -l -a ..";
  char less[20] = "less dummy0.txt";

  //need to pass suitable arguments for parse_args!!
  //cannot simply pass ls [above]
  char *line = less; //ls;
  char **cmd = parse_args(line);

  /****diagnostic****
  int i = 0;
  while(cmd[i])
    {
      printf("arg %d: %s\n", i, cmd[i]);
      i ++;
    }
  *******************/

  //execute command
  execvp(cmd[0], cmd);

  return 0;
}
