#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/*
 * A test program to use with Assignment 6.  
 * Sleeps for three seconds then ends with a successful
 * exit status.
 */
int main() {
  printf("testProgram2 is starting.\n");
  sleep(3);
  printf("testProgram2 is finished!\n");
  exit(0);
} // end main

