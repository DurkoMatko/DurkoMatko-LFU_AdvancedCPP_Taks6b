#include "KilometersEstimator.cpp"

class EfficientKilometersEstimator : public KilometersEstimator {
	public: 
		int getKilometersLeft() const {
			//return (getKilometersPerLiterWrapper()-3) * getLitersLeft();
			return getKilometersPerLiter() * getLitersLeft();
		}

	private:
		int getKilometersPerLiter() const { 
			return 17; 
		}
};