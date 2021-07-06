#include<bits/stdc++.h>
using namespace std;
class RationalNumber{
    private:
        int Denominator,Numerator;
    public:
        void assign(int numerator,int denominator){
            if(denominator==0) cout<<"Undefined";
            else{
                Denominator=denominator;
                Numerator=numerator;
            }
        }
        double convert(){
            double ret=double(Numerator)/double(Denominator);
            return ret;
        }
        void invert(){

            if(Numerator==0) cout<<"Inversion is invalid"<<endl;
            else swap(Denominator,Numerator);
        }
        void print(){
            cout<<Numerator<<"/"<<Denominator<<endl;
        }

};
int main(){
    RationalNumber num;
    int n,d;
    cin>>n>>d;
    num.assign(n,d);
    cout<<num.convert()<<endl;
    num.print();
    num.invert();
    num.print();
}
