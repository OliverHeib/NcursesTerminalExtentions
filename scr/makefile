output: ../obj/main.o ../obj/libCursesExtentions.a
	g++ ../obj/main.o ../obj/libCursesExtentions.a -lncurses -o ../bin/test

../obj/main.o: main.cpp
	g++ -c main.cpp -lncurses -o ../obj/main.o

../obj/ncurses_extentions.colours.o: ncurses_extentions.colours.cpp
	g++ -c ncurses_extentions.colours.cpp -lncurses -o ../obj/ncurses_extentions.colours.o

../obj/ncurses_extentions.guide.o: ncurses_extentions.guide.cpp
	g++ -c ncurses_extentions.guide.cpp -lncurses -o ../obj/ncurses_extentions.guide.o

../obj/libCursesExtentions.a: ../obj/ncurses_extentions.colours.o ../obj/ncurses_extentions.guide.o
	ar cr ../obj/libCursesExtentions.a ../obj/ncurses_extentions.colours.o ../obj/ncurses_extentions.guide.o

clean:
	rm ../obj/*.o ../bin/test ../obj/*.a