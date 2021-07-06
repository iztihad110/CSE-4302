#include<bits/stdc++.h>
using namespace std;
class Time{
    private:
        int hour,minute,second,ch,cm;
    public:
        int hours(){
            return hour;
        }
        int minutes(){
            return minute;
        }
        int seconds(){
            return second;
        }
        void reset(int h,int m, int s){
            hour=h;
            minute=m;
            second=s;
        }
        void advance(int h,int m, int s){
            ch=cm=0;
            second+=s;
            if(second>=60){
                cm=second/60;
                second%=60;

            }
            minute+=(cm+m);
            if(minute>=60){
                ch=minute/60;
                minute%=60;
            }
            hour=(h+ch)%24;
        }
        void print(){
            cout<<hour<<":"<<minute<<":"<<second<<endl;
        }


};
int main(){
    Time t;
    int h,m,s,inh,inm,ins;
    cin>>h>>m>>s;
    t.reset(h,m,s);
    cout<<t.hours()<<" "<<t.minutes()<<" "<<t.seconds()<<endl;
    t.print();
    cin>>inh>>inm>>ins;
    t.advance(inh,inm,ins);
    t.print();
}
