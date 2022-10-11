#include<iostream>
using namespace std;

int main(){
    int n;
    string aslinya, tebakan;
    cin>>n;
    cin>>aslinya;
    if (n>0&&n<=10){
        while (n>0) {
            cin>>tebakan;
            n=n-1;
            if (aslinya==tebakan){
                cout<<"MENANG "<<n+1;
                break;
            } else if (n==0){
                cout<<"KALAH "<<n;
            }
        }        
    } else{
        cout<<"INPUTAN SALAH";
    }
    return 0;
    //I.A. Wicaksono (Ph.D)
}
