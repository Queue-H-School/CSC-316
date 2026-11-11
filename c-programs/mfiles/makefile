HM = /Users/quinnhelfand/Git/School/CSC-316/c-programs/mfiles/h_files/hellomake.h
CFLAGS = -I /Users/quinnhelfand/Git/School/CSC-316/c-programs/mfiles/h_files

hellomake: hellomake.o hellofunc.o
	gcc -o hellomake hellomake.o hellofunc.o

hellomake.o: hellomake.c $(HM)
	gcc -o hellomake.o -c hellomake.c $(CFLAGS)

hellofunc.o: hellofunc.c $(HM)
	gcc -o hellofunc.o -c hellofunc.c $(CFLAGS)

clean:
	rm hellomake *.o