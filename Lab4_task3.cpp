#include<bits/stdc++.h>
using namespace std;
class StudentResult{
 private:
    static int PassMark;
    int Subjectmark[7];
    int Highestmark[7];
    bool fail;
 public:
    void DisplayMarks(){
        for(int i=1;i<=6;i++) cout<<Subjectmark[i]<<" ";
        cout<<endl;
        for(int i=1;i<=6;i++) cout<<Highestmark[i]<<" ";
        cout<<endl;
    }
    void setmarks(int marks[]){
        for(int i=1;i<=6;i++) Subjectmark[i]=marks[i];
    }
    void SetHighestMarks(int highestMarks[]){
        for(int i=1;i<=6;i++) Highestmark[i]=highestMarks[i];
    }
    void CheckPassing(){
        fail=0;
        for(int i=1;i<=6;i++){
            if(Subjectmark[i]<PassMark){
                fail=1;
                break;
            }
        }
        if(fail) cout<<"Fail"<<endl;
        else cout<<"Pass"<<endl;
    }
};
int StudentResult::PassMark=30;
int main(){
    StudentResult s;
    int m[7]={-1,10,40,60,70,80,45};
    int hm[7]={-1,70,80,90,100,85,75};
    s.setmarks(m);
    s.SetHighestMarks(hm);
    s.CheckPassing();
    s.DisplayMarks();
}
