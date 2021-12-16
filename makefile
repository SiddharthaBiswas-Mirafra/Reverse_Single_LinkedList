a.out: Main.o Menu.o Insert.o Print.o Getstring.o Reverse.o Free.o
	cc Main.o Menu.o Insert.o Print.o Getstring.o Reverse.o Free.o

Main.o:Main.c
	cc -c Main.c
Menu.o:Menu.c
	cc -c Menu.c
Insert.o:Insert.c
	cc -c Insert.c
Print.o:Print.c
	cc -c Print.c
Getstring.o:Getstring.c
	cc -c Getstring.c
Reverse.o:Reverse.c
	cc -c Reverse.c
Free.o:Free.c
	cc -c Free.c
