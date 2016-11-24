
class KilometersEstimator
{
	public:
		virtual int getKilometersLeft() const {
			return getKilometersPerLiter() * getLitersLeft();
		}
		virtual void setLitersLeft(int inValue) { 
			mLitersLeft = inValue; 
		}
		virtual int getLitersLeft() const { 
			return mLitersLeft;
		}
		/*int getKilometersPerLiterWrapper() const{
			return getKilometersPerLiter();
		}*/
	private:
		int mLitersLeft;
		virtual int getKilometersPerLiter() const { 
			return 20; 
		}
};