count: counting.o
	g++ counting.o -o count

counting.o: counting.cc
	g++ -c counting.cc

clean:
	 rm *.o count
