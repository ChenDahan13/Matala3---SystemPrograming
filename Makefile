
all1: isort main.o insertionsort.o
all2: txtfind stringmain.o functionliststring.o


#---------first part---------
isort: main.o insertionsort.o functionlist.h
	gcc -Wall -g main.o insertionsort.o -o isort

main.o: main.c functionlist.h
	gcc -Wall -g -c main.c

insertionsort.o: insertionsort.c functionlist.h
	gcc -Wall -g -c insertionsort.c
#----------------------------


#---------second part---------
txtfind: stringmain.o functionliststring.o
	gcc -Wall -g stringmain.o functionliststring.o -o txtfind

stringmain.o: stringmain.c functionliststring.h
	gcc -Wall -g -c stringmain.c

functionliststring.o: functionliststring.c functionliststring.h
	gcc -Wall -g -c functionliststring.c
#------------------------------


clean: 
	  rm *.o main stringmain txtfind

