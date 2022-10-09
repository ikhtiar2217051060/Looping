#include <iostream>
using namespace std;

int main() {
    int angka, batas, balik=0;
    cin>>angka;    
    while (angka>0){
        batas=angka%10;
        angka=angka/10;
        balik=(balik*10)+batas;
    }
    cout<<balik;
    //I.A. Wicaksono (Ph.D)
    return 0;
}
