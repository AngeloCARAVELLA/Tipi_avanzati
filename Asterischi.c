#include <stdio.h>
#include <time.h>
int main(){
  struct timespec intervallo;
  intervallo.tv_sec = 1 ;
  intervallo.tv_nsec = 700 * 1000 * 1000 ;
  puts ("*");
  nanosleep(&intervallo , NULL);
  puts ("*");
  nanosleep(&intervallo , NULL);
  puts ("*");
  nanosleep(&intervallo , NULL);
return 0;
}
