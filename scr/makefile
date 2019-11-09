output: ../obj/main.o ../obj/libCursesExtentions.a
	g++ ../obj/main.o ../obj/libCursesExtentions.a -lncurses -o ../bin/test

../obj/main.o: main.cpp
	g++ -c main.cpp -lncurses -o ../obj/main.o

../obj/ncurses_extentions.o: ncurses_extentions.colours.cpp
	g++ -c ncurses_extentions.colours.cpp -lncurses -o ../obj/ncurses_extentions.o

../obj/libCursesExtentions.a: ../obj/ncurses_extentions.o
	ar cr ../obj/libCursesExtentions.a ../obj/ncurses_extentions.o

clean:
	rm ../obj/*.o ../bin/test ../obj/*.a