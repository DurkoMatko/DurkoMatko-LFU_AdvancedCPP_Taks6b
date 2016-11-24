#include "EfficientKilometersEstimator.cpp"
#include <iostream>


void testFunction(KilometersEstimator *est){
		std::cout << est->getKilometersLeft() << std::endl;
}

int main(){

	KilometersEstimator *a = new KilometersEstimator;
	a->setLitersLeft(10);
	std::cout << a->getKilometersLeft() << std::endl;


	EfficientKilometersEstimator *b = new EfficientKilometersEstimator;
	b->setLitersLeft(10);
	std::cout << b->getKilometersLeft()<< std::endl;

	testFunction(a);
	testFunction(b);

	delete a;
	delete b;
}