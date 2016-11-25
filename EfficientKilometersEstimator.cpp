#include "KilometersEstimator.cpp"

class EfficientKilometersEstimator : public KilometersEstimator {
	private:
		int getKilometersPerLiter() const { 
			return 17; 
		}
};