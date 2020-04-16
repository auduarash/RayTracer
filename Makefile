CXX := g++
CXXFLAGS := -std=c++14
LINKS := -lglut -lGL -lGLU

main: *.cpp *.h
	$(CXX) $(CXXFLAGS) *.cpp -o main

run: main
	./main

clean:
	rm -rf *.o *.gch