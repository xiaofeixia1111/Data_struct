#include "proc.h"

void proc()
{
  char bar[NUM];
  memset(bar,'\0',sizeof(bar));

  const char* lable = "|/-\\"; 

  int i = 0;
  while( i < 100)
  {
    fflush(stdout);
    bar[i++] = '#';
    printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
    usleep(30000);
  } 
  printf("\n");
}
