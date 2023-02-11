#include<iostream>
using namespace std;

int main(){
    int batas;
    cin>>batas;

    for(int baris=1; baris<=batas; baris++){
        for(int kolom=batas-baris; kolom>=1; kolom--){
            cout<<"  ";
        }
        for(int kolom=1; kolom<=baris; kolom++){
            cout<<"  "<<baris<<" ";
        }
        
        cout<<endl;
    }
}