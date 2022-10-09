#include <iostream>
using namespace std;

int main() {
    int storage, x1, x2, batas;
    x1=0;
    x2=1;
    cin>>batas;
    for (int a=0; a<batas; a++){
        cout<<x1<<" ";
        storage=x1+x2;
        x1=x2;
        x2=storage;
    }
    return 0;
    //I.A. Wicaksono (Ph.D)
}
