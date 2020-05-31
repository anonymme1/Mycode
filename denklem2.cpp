#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b,c;
//	kok bulma formulu >>  b^-4ac;
//	2. dereceden 1 bilinmeyenli denklem >> ax^2+bx-c=0;
	cout<<"\n A degerini gir : ";
	cin>>a;
	cout<<"\n B degerini gir : ";
	cin>>b;
	cout<<"\n C degerini gir : ";
	cin>>c;
	double kac_kok = ((b*b)-(4*a*c));
	if (kac_kok<0) {
		cout<<"Kok yok."<<endl;
		double sanal_kok1,sanal_kok2;
		double sanal_kisim1, sanal_kisim2;
		sanal_kisim1 = -b/(2*a);
		sanal_kok1 = sqrt(-kac_kok)/(2*a);
		sanal_kisim2 = -b/(2*a);
		sanal_kok2 = -sqrt(-kac_kok)/(2*a);
		cout<<"1. Sanalin reeli >> "<<sanal_kisim1<<endl;
		cout<<"1. Sanal kok     >> "<<sanal_kok1<<endl;
		cout<<"2. sanalin reeli >> "<<sanal_kisim2<<endl;
		cout<<"2. sanal kok     >> "<<sanal_kok2<<endl;
	}
	else if(kac_kok==0) {
		cout<<"2 tane esit kok."<<endl;
		double kok;
		kok = (-b/(2*a));
		cout<<"Kokler >> "<<kok<<endl;
	}
	else if(kac_kok>0) {
		cout<<"2 farkli kok"<<endl;
		double kok1,kok2;
		kok1 = (-b+sqrt(kac_kok)/(2*a));
		cout<<"Kok1 >> "<<kok1<<endl;
		kok2 = (-b-sqrt(kac_kok)/(2*a));
		cout<<"Kok2 >> "<<kok2<<endl;
	}
}
