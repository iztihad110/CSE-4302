#include<bits/stdc++.h>
using namespace std;
int var;
class Counter{
    private:
        int count,IncrementStep;
    public:
        Counter(){
            IncrementStep=1;
        }
        void SetIncrementStep(int step_val){
            IncrementStep=step_val;
        }
        int getCount(){
            return count;
        }
        void increment(){
            count+=IncrementStep;
        }
        void resetCount(){
            count=0;
        }
        Counter operator +(Counter c){
            Counter temp;
            temp.count=count+c.count;
            return temp;
        }              
        Counter operator +(int var){
            Counter temp;
            temp.count=count+var;
            return temp;         
        }
        Counter operator ++(){
            ++count;
            Counter temp;
            temp.count=count;
            return temp;
        }
        Counter operator ++(int){
            count++;
            Counter temp;
            temp.count=count;
            return temp;
        }
        void operator +=(Counter c){
            count+=c.count;
        }
        friend Counter operator +(int var,Counter c);
        friend Counter operator +(Counter c);
};
Counter operator +(int var,Counter c){
    Counter temp;
    temp.count=var+c.count;
    return temp;
}
Counter operator +(Counter c){
    Counter temp;
    temp.count=var+c.count;
    return temp;
}
int main(){
    Counter c1,c2,c3;
    c1.resetCount();
    c2.resetCount();
    c3.resetCount();
    c1.SetIncrementStep(1);
    c2.SetIncrementStep(2);
    c3.SetIncrementStep(3);
    c1.increment();
    c2.increment();
    c3.increment();
    cout<<c1.getCount()<<endl;
    cout<<c2.getCount()<<endl;
    cout<<c3.getCount()<<endl;
    c1=c2+c3;
    cout<<c1.getCount()<<endl;
    var=4;
    c1=var+c2;
    cout<<c1.getCount()<<endl;
    var=5;
    c1=c2+var;
    cout<<c1.getCount()<<endl;
    c1=c2++;
    cout<<c1.getCount()<<endl;
    c1=++c2;
    cout<<c1.getCount()<<endl;
    c1+=c2;
    cout<<c1.getCount()<<endl;

}