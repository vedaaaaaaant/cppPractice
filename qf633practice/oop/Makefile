##
# Project Title
#
# @file
# @version 0.1

marketPrint: Market.o Date.o marketPrint.cpp
	g++ -c marketPrint.cpp
	g++ -o marketPrint.out Market.o Date.o marketPrint.o

Market.o: Market.cpp
	g++ -c Market.cpp

Date.o: Date.cpp
	g++ -c Market.cpp

clean:
	rm *.o *.out


# end
