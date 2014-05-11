class Fraction 
{
private:
		int numerator;		// ����
		int denominator;		// ����
public:
		Fraction (void); 
		Fraction (int,int); 
		void print()const;
		
		void reduc();
		bool operator==(const Fraction &f)const;
		bool operator>=(const Fraction &f)const;
		bool operator<=(const Fraction &f)const;
		bool operator>(const Fraction &f)const;
		bool operator<(const Fraction &f)const;

		const Fraction operator+(const Fraction &f)const;
		const Fraction operator-(const Fraction &f)const;
		const Fraction operator*(const Fraction &f)const;
		const Fraction operator/(const Fraction &f)const;
};
