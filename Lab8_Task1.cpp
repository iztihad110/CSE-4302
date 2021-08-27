#include<bits/stdc++.h>
using namespace std;
class Animal{
    private:
        string NameOfAnimal,HabitatArea,sound;
        int Height,Weight,birthYear;
    public:
        Animal(){
            NameOfAnimal="Animal";
            HabitatArea="Forest";
            sound="sound";
            Height=1;
            Weight=1;
            birthYear=2021;     
        }
        void GetName(){
            cout<<"Enter Animal Name: ";
            cin>>NameOfAnimal;
        }
        void GetHabitat(){
            cout<<"Enter Habitat Area: ";
            cin>>HabitatArea;
        }
        void GetSound(){
            cout<<"Enter Sound: ";
            cin>>sound;
        }
        void GetHeight(){
            cout<<"Enter Animal Height: ";
            cin>>Height;
        }
        void GetWeight(){
            cout<<"Enter Animal Weight: ";
            cin>>Weight;
        }
        void GetBirthYear(){
            cout<<"Enter BirthYear: ";
            cin>>birthYear;
        }
        void SetName(string nm){
            NameOfAnimal=nm;
        }
        void SetHabitat(string h){
            HabitatArea=h;
        }
        void SetSound(string s){
            sound=s;
        }
        void SetHeight(int h){
            Height=h;
        }
        void SetWeight(int w){
            Weight=w;
        }
        void SetBirthYear(int b){
            birthYear=b;
        }
        void GetAge(){
            cout<<2021-birthYear<<endl;
        }
        void GetInfo(){
            cout<<"Name of The Animal: ";
            cout<<NameOfAnimal<<endl;
            cout<<"Habitat of The Animal: ";
            cout<<HabitatArea<<endl;
            cout<<"Sound of The Animal: ";
            cout<<sound<<endl;
            cout<<"Age of The Animal: ";
            GetAge();
            cout<<"Height of The Animal: ";
            cout<<Height<<endl;
            cout<<"Weight of The Animal: ";
            cout<<Weight<<endl;
        }
            
};
class Cow: public Animal{
    public:
        void GetCowInfo(){
            GetName();
            GetHabitat();
            GetSound();
            GetWeight();
            GetHeight();
            GetBirthYear();
        }
        void SetCowSound(){
            SetSound("moo");
        }
        void DisplayInfo(){
            GetInfo();
        }
};
class Chicken: public Animal{
     public:
      void  GetChickenInfo(){
            GetName();
            GetHabitat();
            GetSound();
            GetWeight();
            GetHeight();
            GetBirthYear();
        }
        void SetChickenSound(){
            SetSound("buck buck");
        }
        void DisplayInfo(){
            GetInfo();
        }
};
class Cat: public Animal{
     public:
        void GetCatInfo(){
            GetName();
            GetHabitat();
            GetSound();
            GetWeight();
            GetHeight();
            GetBirthYear();
        }
        void SetCatSound(){
            SetSound("meow");
        }
        void DisplayInfo(){
            GetInfo();
        }
};
int main(){
   Cow co;
   Chicken ch;
   Cat ca;
   co.GetCowInfo();
   co.SetCowSound();
   co.DisplayInfo();
   ch.GetChickenInfo();
   ch.SetChickenSound();
   ch.DisplayInfo();
   ca.GetCatInfo();
   ca.SetCatSound();
   ca.DisplayInfo();
}