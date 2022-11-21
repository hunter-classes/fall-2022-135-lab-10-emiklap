main: main.o time.o
	g++ -o main main.o time.o

tests: tests.o time.o
	g++ -o tests tests.o time.o

time.o: time.cpp time.h

main.o: main.cpp time.h

tests.o: tests.cpp doctest.h time.h

clean:
	rm -f main.o tests.o time.o
