#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
int y=0;
	double PB,I,ir,T,P,NB;
	cout << "Enter initial loan: ";
	cin >> PB;
	cout << "Enter interest rate per year (%): ";
	cin >> ir;
	cout << "Enter amount you can pay per year: ";
	cin >> P;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	do{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << y+1; 
	if(y>0){
		PB=NB;
	}else{
		PB=PB;
	}
	cout << setw(13) << left << PB;
	I= PB*(ir/100);
	cout << setw(13) << left << I;
	T=PB+I;
	cout << setw(13) << left << T;
	if(T<P){
		P=T;
	}
	cout << setw(13) << left << P;
	NB =T-P;
	cout << setw(13) << left << NB;
	y++;
	cout << "\n";	
	}while (NB != 0);
	return 0;
}
