all: race testProgram1 testProgram2 badProgram1 badProgram2

race: race.c
	gcc -o race race.c

testProgram1: testProgram1.c
	gcc -o testProgram1 testProgram1.c

testProgram2: testProgram2.c
	gcc -o testProgram2 testProgram2.c

badProgram1: badProgram1.c
	gcc -o badProgram1 badProgram1.c

badProgram2: badProgram2.c
	gcc -o badProgram2 badProgram2.c

cleanup:
	rm -f race testProgram1 testProgram2 badProgram1 badProgram2 *.o *~
