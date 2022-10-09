#include <iostream>
using namespace std;

int main() {
    int angka;
    cin>>angka;
 
    for(int x=angka; x>=1; x--){
        if (angka%x==0){
        cout<<x<<endl;
        }
    }
    return 0;
    //I.A. Wicaksono (Ph.D)
}
