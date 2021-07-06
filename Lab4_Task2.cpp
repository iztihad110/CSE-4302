#include<bits/stdc++.h>
using namespace std;
class Employee{
 private:
     string EmpName;
     int EmpID;
     int Age;
     double Salary;
     void Status(){
         if(Age<=25){
            if(Salary<=20000) cout<<"Low"<<endl;
            else cout<<"Moderate"<<endl;
         }
         else{
            if(Salary<=20000) cout<<"Low"<<endl;
            else if(Salary>20000 && Salary<=60000) cout<<"Moderate"<<endl;
            else cout<<"High"<<endl;
         }
     }
 public:
    void FeedInfo(string name,int ID,int age,double salary){
        EmpName=name;
        EmpID=ID;
        Age=age;
        Salary=salary;
    }
    void ShowInfo(){
        cout<<EmpName<<endl;
        cout<<EmpID<<endl;
        cout<<Age<<endl;
        cout<<Salary<<endl;
        Status();
    }
};
int main(){
   Employee a;
   a.FeedInfo("abc",110,23,10000);
   a.ShowInfo();
}
