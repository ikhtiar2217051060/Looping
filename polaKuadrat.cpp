#include<iostream>
using namespace std;

int main()
{
    int batas;
    cin>>batas;


    for(int x=1; x<=batas; x++){
        for(int y=x; y<=x*x; y+=x){
            cout<<y<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}