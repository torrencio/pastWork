//8tjv-Torrencio Vigilante
//for this program I needed to #include string in the test file as my exception returns a string, i though this was reasonable
#ifndef FRACTION_8TJV_H_
#define FRACTION_8TJV_H_

#include <iostream>
using namespace std;
class  FractionException {
public:
	FractionException(const string&);
	string what() const;
private:
	string message;
};
class Fraction {
public://should be acceible to all
	Fraction();//null contructor(0/1)
	Fraction(int);//constructor with one input(num/1)
	Fraction(int, int);//contructor for two input(num/denum, checks if denum=0 and throws exception)
	int numerator() const;//accessor for num
	int denominator() const;//accesor for deNum

	Fraction& operator+=(const Fraction& right);//+=, works with fraction being added or an integer
	Fraction& operator+=(const int x);// num = num*x.deNum + x.num*deNum; then take gcd, basic fraction addition
										//deNum= x.deNum*deNum; I will not go over this for all examples, as user should be familer with 
										//how to add a fraction
	Fraction operator-();// figures out whether number should be positive or negative, only makes the numberator negative
	Fraction& operator++();	// Pre-increment
	Fraction operator++(int);	// Post-increment
	
private:
	int num;//privite numerator
	int deNum;//private denominator
friend int GCD(int,int);// GREATEST COMMON DENOMINATOR, used the one provided in class
friend Fraction operator+(const int left, const Fraction& right);//addition operator, made for fraction plus fraction
friend Fraction operator+(const Fraction& left, const int right);//addition operator, made for fraction plus int
friend Fraction operator+(const Fraction& left, const Fraction& right);//addition operator, made for int plus fraction

friend Fraction operator-(const int left, const Fraction& right);//subtraction operator, made for fraction plus fraction
friend Fraction operator-(const Fraction& left, const int right);//subtraction operator, made for fraction plus int
friend Fraction operator-(const Fraction& left, const Fraction& right);//subtraction operator, made for int plus fraction

friend Fraction operator*(const int left, const Fraction& right); //multiplication operator, made for int plus fraction
friend Fraction operator*(const Fraction& left, const int right); //multiplication operator, made for fraction plus int
friend Fraction operator*(const Fraction& left, const Fraction& right); //multiplication operator, made for fractionplus fraction

friend Fraction operator/(const int left, const Fraction& right);//division operator, made for int plus fraction
friend Fraction operator/(const Fraction& left, const int right);//division operator, made for fraction plus int
friend Fraction operator/(const Fraction& left, const Fraction& right);//division operator, made for fraction plus fraction

friend bool operator<(const Fraction& left, const Fraction& right);//comparasion operator<, made for fraction plus fraction
friend bool operator<(const int left, const Fraction& right);//these operator, if fraction divide the num by the denum, then compare
friend bool operator<(const Fraction& left, const int right);

friend bool operator<=(const Fraction& left, const Fraction& right);//comparasion operator<=, made for fraction plus fraction
friend bool operator<=(const int left, const Fraction& right);
friend bool operator<=(const Fraction& left, const int right);

friend bool operator==(const Fraction& left, const Fraction& right);//comparasion operator==, made for fraction plus fraction
friend bool operator==(const int left, const Fraction& right);
friend bool operator==(const Fraction& left, const int right);

friend bool operator!=(const Fraction& left, const Fraction& right);//comparasion operator!=, made for fraction plus fraction
friend bool operator!=(const int left, const Fraction& right);
friend bool operator!=(const Fraction& left, const int right);

friend bool operator>=(const Fraction& left, const Fraction& right);//comparasion operator>=, made for fraction plus fraction
friend bool operator>=(const int left, const Fraction& right);
friend bool operator>=(const Fraction& left, const int right);

friend bool operator>(const Fraction& left, const Fraction& right);//comparasion operator>, made for fraction plus fraction
friend bool operator>(const int left, const Fraction& right);
friend bool operator>(const Fraction& left, const int right);

friend ostream& operator<<(ostream& out, const Fraction& value);//this is the output stream converts the num and denum into a nice stream and outputs it
friend istream & operator>>(istream & in, Fraction& n);// istream output, takes an input stream in and a reference to a fraction, then takes info from stream and
														//and check denum and throws error if needed, if not saves the value using atoi(), its not a memory intensive operation
														//so why not... changes num and deNum of n, and outputs the stream.
};
#endif /* FRACTION_8TJV_H_ */