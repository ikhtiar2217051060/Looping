#include<iostream>
using namespace std;

int main (){
	int p, q;
	cin>>p>>q;
	if (p<0 or q<0 or p>q){
		cout<<"Input Salah";
	} else {
		for (int x=p; x<=q; x++){
			if (x==0){
				cout<<"0 ";			
			} else if (x%18==0&&x%15==0){
				cout<<"(KPK 18 & 15) ";
			} else if (x%18==0){
				cout<<"Delapan Belas ";
			} else if (x%15==0){
				cout<<"Lima Belas ";
			} else {
				cout<<x<<" ";
			}
		}
	}
	return 0;
	//I.A. Wicaksono (Ph.D)
}
