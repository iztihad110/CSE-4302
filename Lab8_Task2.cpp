#include<bits/stdc++.h>
using namespace std;
class Seat{
    private:
        string com,pre;
    public:
        void GetComfortability(){
            cout<<"Enter comfortability: ";
            cin>>com;
        }
        void GetWarmerPresence(){
            cout<<"Enter Presence Status: ";
            cin>>pre;
        }
        void Display(){
            cout<<"Comfortability Status of Seat: ";
            cout<<com<<endl;
            cout<<"Warmer Presence Status: ";
            cout<<pre<<endl;
        }        
};
class Wheels{
    private:
       double radius,circumference;
    public:
       void GetRadius(){
           cout<<"Enter Radius: ";
           cin>>radius;
       }
       void GetCircumference(){
           circumference=3.1416*2.0*radius;
       }
       void Display(){
           cout<<"Circumference of the wheel is: ";
           cout<<circumference<<endl;
       }       
};
class Engine{
    private:
       double fcr,ecr,rpm;
    public:
       void GetFCR(){
           cout<<"Enter Max Fuel Consumption Rate: ";
           cin>>fcr; 
       }    
       void GetECR(){
           cout<<"Enter Max Energy Consumtion Rate: ";
           cin>>ecr;
       }
       void GetRPM(){
           cout<<"Enter Average RPM: ";
           cin>>rpm;
       }
       void Display(){
           cout<<"Max Fuel Consumption Rate: "<<fcr<<endl;
           cout<<"Max Energy Consumption Rate: "<<ecr<<endl; 
       }
};
class Door{
    private:
       string dm;
    public:
       void GetOpeningMode(){
           cout<<"Enter door opening mode: ";
           cin>>dm;
       }
       void Display(){
           cout<<"Door opening Mode: "<<dm<<endl;
       }   
};
class Car{
    private:
        double acc,FuelCap;
        Seat s;
        Wheels w;
        Engine e;
        Door d;
    public:
        void MaxAcceleration(){
            cout<<"Enter Max Acceleration: ";
            cin>>acc;
        }
        void MaxFuel(){
            cout<<"Enter Max Fuel Capacity: ";
            cin>>FuelCap;
        }
        void GetData(){
            s.GetComfortability();
            s.GetWarmerPresence();
            w.GetRadius();
            w.GetCircumference();
            e.GetFCR();
            e.GetECR();
            e.GetRPM();
            d.GetOpeningMode();
        }
        void Display(){
            cout<<"Maximum Acceleration is: ";
            cout<<acc<<endl;
            cout<<"Maximum Fuel Capacity: ";
            cout<<FuelCap<<endl;
            s.Display();
            w.Display();
            e.Display();
            d.Display();
        }        
};
int main(){
    Car c;
    c.MaxAcceleration();
    c.MaxFuel();
    c.GetData();
    c.Display();
}