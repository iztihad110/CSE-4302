#include<bits/stdc++.h>
using namespace std;
int LCM(int a,int b){
    int g=__gcd(a,b);
    return (a*b)/g;
}
class Fraction{
    private:
       int  denominator,numerator;
    public:
        void CheckErrors(){
            if(denominator==0){
                cout<<"An error has occurred. The value of denominator cannot be Zero";
                numerator=0;
                denominator=0;
            }
        }
        void CheckErrors(Fraction f){
            if(f.denominator==0){
                cout<<"An error has occurred. The value of denominator cannot be Zero";
                f.numerator=0;
                f.denominator=0;
            }
        }
        int getDenominator(){
            return denominator;
        }
        int getNumerator(){
            return numerator;
        }
        int SetDenominator(int d){
            denominator=d;
            CheckErrors();
        }
        int SetNumerator(int n){
            numerator=n;
        }
        double Decimal(){
            double d=double(numerator)/denominator;
            return d;
        }
        Fraction operator +(Fraction f){
            int lcm=LCM(denominator,f.denominator);
            Fraction temp;
            temp.denominator=lcm;
            int a=numerator*(lcm/denominator);
            int b=f.numerator*(lcm/f.denominator);
            temp.numerator=a+b;
            return temp;
        }
        Fraction operator -(Fraction f){
            int lcm=LCM(denominator,f.denominator);
            Fraction temp;
            temp.denominator=lcm;
            int a=numerator*(lcm/denominator);
            int b=f.numerator*(lcm/f.denominator);
            temp.numerator=a-b;
            return temp;
        }
        Fraction operator *(Fraction f){
            Fraction temp;
            temp.numerator=numerator*f.numerator;
            temp.denominator=denominator*f.denominator;
            return temp;
        }
        Fraction operator /(Fraction f){
            Fraction temp;
            temp.denominator=denominator*f.numerator;
            temp.numerator=numerator*f.denominator;
            CheckErrors(temp);
            return temp;
        }
         
};
int main(){
    Fraction f1,f2,f3;
    f1.SetDenominator(3);
    f1.SetNumerator(1);
    f2.SetDenominator(5);
    f2.SetNumerator(2);
    f3=f1+f2;
    cout<<f3.getNumerator()<<"/"<<f3.getDenominator()<<endl;
    f3=f1-f2;
    cout<<f3.getNumerator()<<"/"<<f3.getDenominator()<<endl;
    f3=f1*f2;
    cout<<f3.getNumerator()<<"/"<<f3.getDenominator()<<endl;
    f3=f1/f2;
    cout<<f3.getNumerator()<<"/"<<f3.getDenominator()<<endl;
    cout<<f1.Decimal()<<endl;
}