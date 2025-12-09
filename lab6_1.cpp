#include<iostream>
using namespace std;

int main(){
    int i;
    int e=0,o=0;
    cout << "Enter an integer: ";
    cin >>i;
    while(i!=0){
    if(i%2==0){
        e++;
        }
        else{o++;}
    cout << "Enter an integer: ";
    cin >>i;
    }
    cout << "#Even numbers = "<<e<<" \n";
    cout << "#Odd numbers = "<<o<<" ";
    return 0;
}
