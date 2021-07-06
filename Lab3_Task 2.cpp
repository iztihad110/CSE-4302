#include<bits/stdc++.h>
using namespace std;
class Medicine{
    private:
        string Name,GenericName;
        double unitPrice,discountPercent,SellingPrice;
    public:
        void assignName(char name[], char genericName[]){
            Name=name;
            GenericName=genericName;
        }
        void assignPrice(double price){
            unitPrice=price;
        }
        void setDiscountPercent(double percent){
            discountPercent=percent;
        }
        double getSellingPrice(int nos){
             SellingPrice=unitPrice*double(nos)-(unitPrice*double(nos)*discountPercent)/100.0;
             return SellingPrice;
        }
        void display(){
            cout<<Name<<"("<<GenericName<<")"<<" "<<"has a unit price BDT "<<unitPrice<<" "<<"Discount is "<<discountPercent<<"%"<<endl;
        }

};
int main(){
    Medicine m;
    char na[30],g[30];
    double pr,pe;
    int n;
    cin>>na>>g>>pr>>pe>>n;
    m.assignName(na,g);
    m.assignPrice(pr);
    m.setDiscountPercent(pe);
    m.display();
    cout<<m.getSellingPrice(n)<<endl;
}
