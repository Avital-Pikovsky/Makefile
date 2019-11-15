all: mains maind

mains: mainProg.o libmyMath.a
	gcc -Wall -o mains mainProg.o -L. libmyMath.a

maind: mainProg.o libmyMath.so
	gcc -Wall -o maind mainProg.o -L. ./libmyMath.so

mymaths: libmyMath.a

libmyMath.a :basicMath.o power.o myMath.h
	ar -rcs libmyMath.a basicMath.o power.o

mymathd: libmyMath.so

libmyMath.so: basicMath.o power.o myMath.h
	gcc -shared -o libmyMath.so basicMath.o power.o

mainProg.o: mainProg.c myMath.h
	gcc -Wall -c mainProg.c

power.o: power.c myMath.h
	gcc -Wall -fPIC -c power.c

basicMath.o: basicMath.c myMath.h
	gcc -Wall -c basicMath.c 

clean:
	rm -f *.o *.a *.so mains maind
