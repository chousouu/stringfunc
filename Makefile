CC=g++
CFLAGS= -Wall

all: stringas.exe

stringas.exe: main.cpp SelfmadeStringTester.cpp strings.cpp
	   	   $(CC) main.cpp SelfmadeStringTester.cpp strings.cpp -o stringas.exe
		   

clean:
	   del *.o *.exe