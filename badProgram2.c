#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/*
 * A test program to use with Assignment 6.  
 * Sleeps for a whole minute then ends with a
 * failure status.  
 *
 * A minute is MUCH longer than the amount of 
 * time any of the other programs will run.  
 * The point of this program is to race it
 * with another program (one without an error)
 * and make sure that this program is killed 
 * when the other program wins the race. In 
 * other words, when you race this program 
 * against a non-error program you should never
 * see the failure message and a "ps" command
 * should show that badProgram2 is no longer
 * running.
 */
int main() {
  printf("badProgram2 is starting.\n");
  sleep(60);
  printf("badProgram2 has failed!\n");
  exit(1);
} // end main

