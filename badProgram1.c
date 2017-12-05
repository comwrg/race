#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/*
 * A test program to use with Assignment 6.  
 * Sleeps for one second then ends with a
 * failure status.
 */
int main() {
  printf("badProgram1 is starting.\n");
  sleep(1);
  printf("badProgram1 has failed!\n");
  exit(1);
} // end main

