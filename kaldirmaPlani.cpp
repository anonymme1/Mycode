#include <iostream>
using namespace std;

class Lifting {
	private:
		int yuk,donanim,vinc,toplamAgirlik;
	public:
		void input() {
			cout<<"\nYuk agirligi: ";
			cin>>yuk;
			cout<<"\nDonanim agirligi: ";
			cin>>donanim;
			cout<<"\nVinc kaldirma kapasitesi: ";
			cin>>vinc;
			toplamAgirlik = yuk+donanim;
		}

		void kontrol() {
			input();
			if(vinc < toplamAgirlik) {
				cout<<"\nVinc kapasitesi yetersiz.\n";
			}

			else {
				cout<<"\nToplam agirlik >> "<<toplamAgirlik<<"\n";
				int kurulum;
				cout<<"\nVinc kurulum kapasitesi: ";
				cin>>kurulum;
				float islem1, islem2;
				islem1 = (float)toplamAgirlik/kurulum;
				islem2 = (float)islem1*100;
				cout<<"\nKaldirma katsayisi >> "<<islem2<<"\n";

				if(islem2 > 90) {
					cout<<"\nKaldirma katsayisi %90 i gecen kaldirmalar yapilamaz.\n";
				}

				else {
					cout<<"\nKaldirma yapilabilir.\n";
				}
			}
		}

};

int main(int argc, char *argv[]) {
	Lifting l;
	l.kontrol();
}
