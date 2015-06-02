#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#include "fraction8tjv.h"
FractionException::FractionException(const string& m) : message(m) {}
string FractionException::what() const { return message; }

Fraction::Fraction() : num(0), deNum(1) { }
Fraction::Fraction(int num1) : num(num1), deNum(1) { }
Fraction::Fraction(int num1, int denum1){
	int commonDenominator(0);
	if (denum1==0){
	throw FractionException("You divided by zero!");
	
	}
	commonDenominator=GCD(abs(num1),abs(denum1));// make them both positive in the gcd calc
	if (commonDenominator!=0){
		num1=num1/commonDenominator;
		denum1=denum1/commonDenominator;
	}
		if(num1<0){
			if(denum1<0){
				num=abs(num1);
				deNum=abs(denum1);
				}
			else if(denum1>0){
				num=(num1*(-1));
				deNum=(denum1);
				}
			}
		else if(num1>0){
			if(denum1<0){
				num=(num1*(-1));
				deNum=(denum1*(-1));
				}
			else if(denum1>0){
				num=(num1);
				deNum=(denum1);
				}
			}
		//turns negative properly
	
	
	


} 

int Fraction::numerator()const{
	return num;
}
int Fraction::denominator()const{
	return deNum;
}
int GCD( int numN, int numM){
	if(numM<=numN&&numN%numM==0)
		return numM;
	else if(numN<numM)
		return GCD(numM,numN);
	else
	return GCD(numM, numN%numM);

	

}

Fraction& Fraction::operator+=(const Fraction& x) {
	num = num*x.deNum + x.num*deNum;
	deNum= x.deNum*deNum;
	int gcd=GCD(abs(num), abs(deNum));
	if(gcd!=0){
		num=num/gcd;
		deNum=deNum/gcd;
	}
	return *this;
}
Fraction& Fraction::operator+=(const int x) {
	num = num+ x*deNum;
	int gcd=GCD(abs(num), abs(deNum));
	if(gcd!=0){
		num=num/gcd;
		deNum=deNum/gcd;
	}
	return *this;
}

// Pre-increment
Fraction& Fraction::operator++() {
		num=num+deNum;
		int gcd=GCD(abs(num), abs(deNum));
		if(gcd!=0){
		num=num/gcd;
		deNum=deNum/gcd;
		}
	return *this;
}
Fraction Fraction::operator -( ){
	num=num*(-1);
	return *this;
}
// Post-increment
Fraction Fraction::operator++(int unused) {
	Fraction clone(num, deNum);
	num+=deNum;
	int gcd=GCD(abs(num), abs(deNum));
		if(gcd!=0){
		num=num/gcd;
		deNum=deNum/gcd;
		}
	return clone;
}

Fraction operator+(const Fraction& left, const Fraction& right) {
	int num1=right.num*left.deNum+left.num*right.deNum;
	int deNum1= right.deNum*left.deNum;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}
Fraction operator+(const int left, const Fraction& right) {
	Fraction x(left);
	int num1=right.num*x.deNum+x.num*right.deNum;
	int deNum1= right.deNum*x.deNum;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}
Fraction operator+(const Fraction& left, const int right){
	Fraction x(right);
	int num1=x.num*left.deNum+left.num*x.deNum;
	int deNum1= x.deNum*left.deNum;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);

}



Fraction operator-(const Fraction& left, const Fraction& right) {
	int num1=left.num*right.deNum-right.num*left.deNum;
	int deNum1= right.deNum*left.deNum;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}
Fraction operator-(const int left, const Fraction& right) {
	Fraction x(left);
	int num1=x.num*right.deNum-right.num*x.deNum;
	int deNum1= right.deNum*x.deNum;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}
Fraction operator-(const Fraction& left, const int right) {
	Fraction x(right);
	int num1=left.num*x.deNum-x.num*left.deNum;
	int deNum1= x.deNum*left.deNum;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}



Fraction operator*(const Fraction& left, const Fraction& right) {
	int num1=right.num*left.num;
	int deNum1= right.deNum*left.deNum;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}
Fraction operator*(const int left, const Fraction& right) {
	Fraction x(left);
	int num1=right.num*x.num;
	int deNum1= right.deNum*x.deNum;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}
Fraction operator*(const Fraction& left, const int right) {
	Fraction x(right);
	int num1=x.num*left.num;
	int deNum1= x.deNum*left.deNum;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}



Fraction operator/(const Fraction& left, const Fraction& right) {
	int deNum1=right.num*left.deNum;
	int num1= right.deNum*left.num;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}
Fraction operator/(const int left, const Fraction& right) {
	Fraction x(left);
	int deNum1=right.num*x.deNum;
	int num1= right.deNum*x.num;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}
Fraction operator/(const Fraction& left, const int right) {
	Fraction x(right);
	int deNum1=x.num*left.deNum;
	int num1= x.deNum*left.num;
	int gcd=GCD(abs(num1), abs(deNum1));
		if(gcd!=0){
		num1=num1/gcd;
		deNum1=deNum1/gcd;
		}
	return Fraction(num1, deNum1);
}



bool operator<(const Fraction& left, const Fraction& right){
	double calc1=static_cast<double>(left.num)/static_cast<double>(left.deNum);
	double calc2=static_cast<double>(right.num)/static_cast<double>(right.deNum);
		if(calc1<calc2)
			return true;
		else 
			return false;
}
bool operator<(const int left, const Fraction& right){
		double calc1=right.numerator();
		double calc3=right.denominator();
		calc1=calc1/calc3;
		double calc2=left;
		if(calc2<calc1)
			return true;
		else 
			return false;
}
bool operator<(const Fraction& left, const int right){
		double calc1=left.numerator();
		double calc3=left.denominator();
		calc1=calc1/calc3;
		double calc2=right;
		
		if(calc1<calc2)
			return true;
		else 
			return false;
}



bool operator<=(const Fraction& left, const Fraction& right){
	double calc1=left.num/left.deNum;
	double calc2=right.num/right.deNum;
		if(calc1<=calc2)
			return true;
		else 
			return false;
}
bool operator<=(const int left, const Fraction& right){
		double calc1=right.numerator();
	double calc3=right.denominator();
	calc1=calc1/calc3;
	double calc2=left;
		if(calc2<=calc1)
			return true;
		else 
			return false;
}
bool operator<=(const Fraction& left, const int right){
		double calc1=left.numerator();
	double calc3=left.denominator();
	calc1=calc1/calc3;
	double calc2=right;
		if(calc1<=calc2)
			return true;
		else 
			return false;
}



bool operator==(const Fraction& left, const Fraction& right){
	double calc1=static_cast<double>(left.num)/static_cast<double>(left.deNum);
	double calc2=static_cast<double>(right.num)/static_cast<double>(right.deNum);
		if(calc1==calc2)
			return true;
		else 
			return false;
}
bool operator==(const int left, const Fraction& right){
	double calc1=right.numerator();
	double calc3=right.denominator();
	calc1=calc1/calc3;
	double calc2=left;
		if(calc2==calc1)
			return true;
		else 
			return false;
}
bool operator==(const Fraction& left, const int right){
		double calc1=left.numerator();
		double calc3=left.denominator();
		calc1=calc1/calc3;
		double calc2=right;
		
		if(calc1==calc2)
			return true;
		else 
			return false;
}



bool operator!=(const Fraction& left, const Fraction& right){
	double calc1=left.num/left.deNum;
	double calc2=right.num/right.deNum;
		if(calc1!=calc2)
			return true;
		else 
			return false;
}
bool operator!=(const int left, const Fraction& right){
	double calc2=right.numerator();
	double calc3=right.denominator();
	calc2=calc2/calc3;
	double calc1=left;
		if(calc1!=calc2)
			return true;
		else 
			return false;
}
bool operator!=(const Fraction& left, const int right){
		double calc1=left.numerator();
		double calc3=left.denominator();
		calc1=calc1/calc3;
		double calc2=right;
		if(calc1!=calc2)
			return true;
		else 
			return false;
}



bool operator>=(const Fraction& left, const Fraction& right){
	double calc1=left.num/left.deNum;
	double calc2=right.num/right.deNum;
		if(calc1>=calc2)
			return true;
		else 
			return false;
}
bool operator>=(const int left, const Fraction& right){
	double calc2=right.numerator();
	double calc3=right.denominator();
	calc2=calc2/calc3;
	double calc1=left;
		if(calc1>=calc2)
			return true;
		else 
			return false;
}
bool operator>=(const Fraction& left, const int right){
	double calc1=left.numerator();
	double calc3=left.denominator();
	calc1=calc1/calc3;
	double calc2=right;
		if(calc1>=calc2)
			return true;
		else 
			return false;
}



bool operator>(const Fraction& left, const Fraction& right){
	double calc1=static_cast<double>(left.num)/static_cast<double>(left.deNum);
	double calc2=static_cast<double>(right.num)/static_cast<double>(right.deNum);
		if(calc1>calc2)
			return true;
		else 
			return false;
}
bool operator>(const Fraction& left, const int right){
	double calc1=left.numerator();
	double calc3=left.denominator();
	calc1=calc1/calc3;
	double calc2=right;
	
		if(calc1>calc2)
			return true;
		else 
			return false;
}
bool operator>(const int left, const Fraction& right){
	double calc1=right.numerator();
	double calc3=right.denominator();
	calc1=calc1/calc3;
	double calc2=left;
		if(calc1>calc2)
			return true;
		else 
			return false;
}



ostream& operator<<(ostream& out, const Fraction& value) {
   out <<"\"" <<value.numerator() << "/" << value.denominator() <<"\""<<endl;
   return out;
}
istream & operator>>(istream & in, Fraction& n){
	string x,z;
	//int y;
	bool flagNum=true;
	int num1(0);
	in>>x;
	if(atoi(x.c_str())==0){
		n.num=0;
		n.deNum=1;
	}
	//cout<<x<<endl;
	for(int i=0;i<x.length();i++)
	{
		if(x[i]=='/'){
			 num1=atoi(z.c_str());	
			z="";
			n.num=num1;
			 flagNum=false;
		}
		else{
			z+=x[i];
		}
	
	
	}
	if(flagNum==true)
	{
		num1=atoi(z.c_str());
		n.num=num1;
		n.deNum=1;
	}
	else if(flagNum==false){
	int denum1=atoi(z.c_str());
	//cout<<denum1<<" "<<num1<<endl;
	if (denum1>0)
		n.deNum=denum1;
	else
		throw FractionException("Dividing by zero!");
	}

	


        return in;
}
