#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c,deter;
cout<<"Enter coefficients of ax^2+bx+c:";
cin>>a>>b>>c;
deter=b*b-4*a*c;
if(deter==0){
    cout<<"x1=x2="<<float(-b)/(2*a);
}
else
    if(deter>0){
        cout<<"x1="<<(-b+float(sqrt(deter)))/(2*a);
        cout<<"\nx2="<<(-b-float(sqrt(deter)))/(2*a);
    }
    else
    {cout<<"x1="<<(float(-b)/(2*a))<<"+i"<<(float(sqrt(abs(deter)))/(2*a));
        cout<<"x2="<<(float(-b)/(2*a))<<"-i"<<(float(sqrt(abs(deter)))/(2*a));}
        cout<<"\n"<<trunc(a);
  return 0;
}





