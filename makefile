CC=g++
OBJECT_FILES = main.o KilometersEstimator.o EfficientKilometersEstimator.o
CPPFLAGS = -std=c++11

default : all
all : KilometersEstimator_Test

KilometersEstimator_Test: $(OBJECT_FILES)
	g++ -o $@ $(OBJECT_FILES)


%.o: %.cpp
	$(CC) -c $(CPPFLAGS) $<


clean:
	rm KilometersEstimator_Test  $(OBJECT_FILES)
