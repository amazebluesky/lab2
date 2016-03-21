lab2:bmi.o main.o
	g++ -o lab2 bmi.o main.o
bmi.o:bmi.cpp bmi.h
	g++ -c bmi.cpp
main.o:main.cpp bmi.h
	g++ -c main.cpp

clean:
	rm bmi.o main.o
