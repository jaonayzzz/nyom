#include <iostream>
#include<cmath>
using namespace std;
double deg2rad(double a){
    double b;
    b=(a*M_PI)/180;
    return b;
    }
double rad2deg(double c){
    double d;
    d=(c*180)/M_PI;
    return d;
    }
double findXComponent(double e,double f,double b,double d){
    double g,h,r;
    g=e*cos(b);
    h=f*cos(d);
    r=g+h;
    return r;
    }
double findYComponent(double i,double j,double b,double d){
    double k,l,s;
    k=i*sin(b);
    l=j*sin(d);
    s=k+l;
    return s;
    }
double pythagoras(double r, double s){
    double o;
    o=sqrt(pow(r,2)+pow(s,2));
    return o;
    }
void showResult(double p,double q){
    cout<<"Length of the resultant vector = "<<p<<" \n";
    cout<<"Direction of the resultant vector (deg) = "<<q<<endl;
    }

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 
    showResult(result_vec_length,result_vec_direction);
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}
