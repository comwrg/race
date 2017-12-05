#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/*
 * A test program to use with Assignment 6.  
 * Sleeps for two seconds then ends with a successful
 * exit status.
 */
int main() {
  printf("testProgram1 is starting.\n");
  sleep(2);
  printf("testProgram1 is finished!\n");
  exit(0);
} // end main

