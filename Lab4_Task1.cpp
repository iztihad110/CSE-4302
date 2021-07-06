#include<bits/stdc++.h>
using namespace std;
class BankAccount{
 private:
    int AccountNo;
    string HolderName;
    string AccountType;
    double currBalance;
    double minBalance;
 public:
    BankAccount(int AccNo,string name,string type,double Balance,double minB){
        AccountNo=AccNo;
        HolderName=name;
        AccountType=type;
        currBalance=Balance;
        minBalance=minB;
    }
    void Assign(int AccNo,string name,string type,double Balance,double minB){
        AccountNo=AccNo;
        HolderName=name;
        AccountType=type;
        currBalance=Balance;
        minBalance=minB;
    }
    void display(){
        cout<<AccountNo<<endl;
        cout<<HolderName<<endl;
        cout<<AccountType<<endl;
        cout<<currBalance<<endl;
        cout<<minBalance<<endl;
    }
    void Deposit(double amount){
        currBalance+=amount;
    }
    void withdrawal(double amount){
        if(amount>currBalance) cout<<"Invalid amount"<<endl;
        else{
            currBalance-=amount;
        }
    }
    void giveInterest(){
        double interest=currBalance*0.03;
        interest-=interest*0.10;
        currBalance+=interest;
    }
    ~BankAccount(){
         cout<<"Account of "<<HolderName<<" with account no "<<AccountNo<<" is destroyed with a balance BDT "<<currBalance<<endl;

    }
};
int main(){
   BankAccount a(1,"abs","Current",1230.0,100);
   a.Deposit(100.0);
   a.withdrawal(200);
   a.display();
   a.giveInterest();
   a.display();

}
