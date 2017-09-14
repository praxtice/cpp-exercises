main: main.o
	g++ main.o -o main
main.o: main.cpp
	g++ -c main.cpp -o main.o

clean:
	rm *.o main

build:
	@read -p "Enter File Name: " file; \
	g++ -c $$file.cpp -o $$file.o; \
	g++ $$file.o -o main