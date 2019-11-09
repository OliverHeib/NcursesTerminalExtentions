output: ../obj/main.o ../obj/colours.o
	g++ ../obj/main.o ../obj/colours.o -lncurses -o ../bin/test

../obj/main.o: main.cpp
	g++ -c main.cpp -lncurses -o ../obj/main.o

../obj/colours.o: ncurses_extentions.colours.cpp
	g++ -c ncurses_extentions.colours.cpp -lncurses -o ../obj/colours.o

clean:
	rm ../obj/*.o ../bin/test ../obj/*.a