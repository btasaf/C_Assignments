#include<iostream>
#include<math.h>;
#include"fraction.h"
using namespace std;

Fraction::Fraction(){
	numerator=0;
	denominator=1;
}
Fraction::Fraction(int n=0,int d=1){
	numerator=n;
	denominator=d;
	reduc();
}

void Fraction::print()const{
	cout<<numerator<<"/"<<denominator<<endl;
}
const Fraction Fraction::operator+(const Fraction &f)const{
	Fraction back=Fraction(numerator*f.denominator+f.numerator*denominator,denominator*f.denominator);
	back.reduc();
	return back;
}
const Fraction Fraction::operator-(const Fraction &f)const{
	Fraction back=Fraction(numerator*f.denominator-f.numerator*denominator,denominator*f.denominator);
	back.reduc();
	return back;
}
const Fraction Fraction::operator*(const Fraction &f)const{
	Fraction back=Fraction(numerator*f.numerator,denominator*f.denominator);
	back.reduc();
	return back;
}
const Fraction Fraction::operator/(const Fraction &f)const{
	Fraction back=Fraction(numerator*f.denominator,denominator*f.numerator);
	back.reduc();
	return back;
}
void Fraction:: reduc(){
	int i=2;
		while(i<=numerator&&i<=denominator){
			if(numerator%i==0&&denominator%i==0){
				numerator=numerator/i;
				denominator=denominator/i;
				reduc();
			}
			i++;
		}
}

bool Fraction:: operator==(const Fraction &f)const{
	if(numerator==f.numerator&&denominator==f.denominator)return true;
	else return false;
}
bool Fraction:: operator>=(const Fraction &f)const{
	Fraction this1=Fraction(numerator,denominator);
	if(this1==f||this1>f)return true;
	else return false;

}
bool Fraction:: operator<=(const Fraction &f)const{
	Fraction this1=Fraction(numerator,denominator);
	if(this1==f||this1<f)return true;
	else return false;
}
bool Fraction:: operator<(const Fraction &f)const{
	Fraction this1=Fraction(numerator,denominator);
	Fraction back=this1-f;
	if((back.numerator>0&&back.denominator>0)||(back.numerator<0&&back.denominator<0))return false;
	else return true;
	
}
bool Fraction:: operator>(const Fraction &f)const{
	Fraction this1=Fraction(numerator,denominator);
	Fraction back=this1-f;
	if((back.numerator>0&&back.denominator>0)||(back.numerator<0&&back.denominator<0))return true;
	else return false;
	
}