CC=g++
OBJECTS = main.o KilometersEstimator.o EfficientKilometersEstimator.o
CPPFLAGS = -std=c++11

default : all
all : KilometersEstimator_Test

KilometersEstimator_Test: $(OBJECTS)
	g++ -o $@ $(OBJECTS)


%.o: %.cpp
	$(CC) -c $(CPPFLAGS) $<


clean:
	rm KilometersEstimator_Test  $(OBJECTS)
