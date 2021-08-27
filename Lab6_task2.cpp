#include<bits/stdc++.h>
using namespace std;
class matrix3d{
    private:
        double matrix[3][3];
    public:
        matrix3d(){
            memset(matrix,0,sizeof(matrix));
        }
        matrix3d(double a11,double a12,double a13,double a21,double a22,double a23,double a31,double a32,double a33){
            matrix[0][0]=a11,matrix[0][1]=a12,matrix[0][2]=a13;
            matrix[1][0]=a21,matrix[1][1]=a22,matrix[1][2]=a23;
            matrix[2][0]=a31,matrix[2][1]=a32,matrix[2][2]=a33;
        }
        void display(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        double det(){
            double a11=matrix[0][0],a12=matrix[0][1],a13=matrix[0][2];
            double a21=matrix[1][0],a22=matrix[1][1],a23=matrix[1][2];
            double a31=matrix[2][0],a32=matrix[2][1],a33=matrix[2][2];
            return a11*(a22*a33-a23*a32)-a12*(a21*a33-a23*a31)+a13*(a21*a32-a22*a31);
        }
        matrix3d Transpose(){
            double a11=matrix[0][0],a12=matrix[0][1],a13=matrix[0][2];
            double a21=matrix[1][0],a22=matrix[1][1],a23=matrix[1][2];
            double a31=matrix[2][0],a32=matrix[2][1],a33=matrix[2][2];
            return matrix3d(a11,a21,a31,a12,a22,a32,a13,a23,a33);
        }
        matrix3d Cofactor(){
            double a11=matrix[0][0],a12=matrix[0][1],a13=matrix[0][2];
            double a21=matrix[1][0],a22=matrix[1][1],a23=matrix[1][2];
            double a31=matrix[2][0],a32=matrix[2][1],a33=matrix[2][2];
            double a,b,c,d,e,f,g,h,i;
            a = a22*a33 - a23*a32;  b = a21*a33 - a23*a31;  c = a21*a32 - a22*a31;
            d = a12*a33 - a13*a32;  e = a11*a33 - a13*a31;  f = a11*a32 - a12*a31;
            g = a12*a23 - a13*a22;  h = a11*a23 - a13*a21;  i = a11*a22 - a12*a21;
            matrix3d(a,-b,c,-d,e,-f,g,-h,i);
        }
        matrix3d Multiply(double x,matrix3d m){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    m.matrix[i][j]*=x;
                }
            }
            return m;
        }
        matrix3d inverse(){
            double d=det();
            if(d==0) exit(0);
            matrix3d m=Cofactor();
            matrix3d mat=m.Transpose();
            mat=Multiply(1/d,mat);
            return mat;

        }
        matrix3d operator +(matrix3d m){
            double a11=matrix[0][0],a12=matrix[0][1],a13=matrix[0][2];
            double a21=matrix[1][0],a22=matrix[1][1],a23=matrix[1][2];
            double a31=matrix[2][0],a32=matrix[2][1],a33=matrix[2][2];
            double b11,b12,b13,b21,b22,b23,b31,b32,b33;
            b11=a11+m.matrix[0][0],b12=a12+m.matrix[0][1],b13=a13+m.matrix[0][2];
            b21=a21+m.matrix[1][0],b22=a22+m.matrix[1][1],b23=a23+m.matrix[1][2];
            b31=a31+m.matrix[2][0],b32=a32+m.matrix[2][1],b33=a33+m.matrix[2][2];
            return matrix3d(b11,b12,b13,b21,b22,b23,b31,b32,b33);
        }
        matrix3d operator -(matrix3d m){
            double a11=matrix[0][0],a12=matrix[0][1],a13=matrix[0][2];
            double a21=matrix[1][0],a22=matrix[1][1],a23=matrix[1][2];
            double a31=matrix[2][0],a32=matrix[2][1],a33=matrix[2][2];
            double b11,b12,b13,b21,b22,b23,b31,b32,b33;
            b11=a11-m.matrix[0][0],b12=a12-m.matrix[0][1],b13=a13-m.matrix[0][2];
            b21=a21-m.matrix[1][0],b22=a22-m.matrix[1][1],b23=a23-m.matrix[1][2];
            b31=a31-m.matrix[2][0],b32=a32-m.matrix[2][1],b33=a33-m.matrix[2][2];
            return matrix3d(b11,b12,b13,b21,b22,b23,b31,b32,b33);
        }
        matrix3d operator *(matrix3d m){
            double a11=matrix[0][0],a12=matrix[0][1],a13=matrix[0][2];
            double a21=matrix[1][0],a22=matrix[1][1],a23=matrix[1][2];
            double a31=matrix[2][0],a32=matrix[2][1],a33=matrix[2][2];
            double b11,b12,b13,b21,b22,b23,b31,b32,b33;
            b11=m.matrix[0][0],b12=m.matrix[0][1],b13=m.matrix[0][2];
            b21=m.matrix[1][0],b22=m.matrix[1][1],b23=m.matrix[1][2];
            b31=m.matrix[2][0],b32=m.matrix[2][1],b33=m.matrix[2][2];
            double a,b,c,d,e,f,g,h,i;
            a=(a11*b11)+(a12*b21)+(a13*b31);b=(a11*b12)+(a12*b22)+(a13*b32);c=(a11*b13)+(a12*b23)+(a13*b33);
            d=(a21*b11)+(a22*b21)+(a23*b31);e=(a21*b12)+(a22*b22)+(a23*b32);f=(a21*b13)+(a22*b23)+(a23*b33);
            g=(a31*b11)+(a32*b21)+(a33*b31);h=(a31*b12)+(a32*b22)+(a33*b32);i=(a31*b13)+(a32*b23)+(a33*b33);
            return matrix3d(a,b,c,d,e,f,g,h,i);
        }


};
int main(){
    matrix3d M1(1,2,3,4,12,6,7,8,10);
    matrix3d M2(9,19,7,6,20,4,3,2,1);
    M1.display();
    cout<<M1.det()<<endl;
    matrix3d inv_M=M1.inverse();
    inv_M.display();
    matrix3d M3;
    M3=M1+M2;
    M3.display();
    M3=M1-M2;
    M3.display();
    M3=M1*M2;
    M3.display();
}