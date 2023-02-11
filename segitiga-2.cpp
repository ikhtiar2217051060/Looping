#include<iostream>
using namespace std;

int main(){
    int batas;
    cin>>batas;

    for(int baris=1; baris<=batas; baris++){
        for(int kolom=batas+1-baris; kolom>=1; kolom--){
            cout<<"* ";
        }
        cout<<endl;
    }
}