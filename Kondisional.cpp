#include<iostream>
using namespace std;
int main(){
	int x1, y1;
	cout<<"Masukan sebuah bilangan : ";
	cin>>x1;
	y1 = x1 % 2;
	string z = y1 == 1 ? "Ganjil":"genap";
	cout<<x1<<" Merupakan Bilangan "<<z;
	
}
