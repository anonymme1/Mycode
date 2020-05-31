#include <iostream>

using namespace std;

class Dizi {
	public:
		Dizi() {
			cout<<"\nDizinin baslangic boyutu 10 dur.\nİstediginiz zaman bunu yukseltip azaltabilirsin.\n";
		}

		~Dizi() {
			cout<<"\nDizi silindi.\n";
		}

		int ekle(int *a, int b) {
			for(int i=0;i<b;i++) {
				cin>>a[i];
			}
			return *a;
		}

		int genislet(int *a, int eskiboyut, int yeniboyut) {
			int *yeni = new int[eskiboyut+yeniboyut];
			for(int i=0;i<eskiboyut;i++) {
				yeni[i] = a[i];
			}
			delete[] a;
			goster(a, eskiboyut+yeniboyut);
			return *yeni;
		}

		void goster(int *a, int b) {
			for(int i=0;i<b;i++) {
				cout<<i+1<<". eleman > "<<a[i]<<endl;
			}
			cout<<endl;
		}



};

int main() {
	Dizi d;
	int *dizi = new int[10];
	int boyut,eleman;

	while(1) {
		cout<<"\nEleman ekleme 1\n";
		cout<<"\nEleman silme  2\n";
		cout<<"\nGosterme      3\n";
		cout<<"\nGenisletme    4\n";
		cout<<"\n\nCikis       5\n";
		int islem;
		cout<<"\nİslem sec: ";
		cin>>islem;
		switch(islem) {
			case 1:
				cout<<"\nDizi boyutu: ";
				cin>>boyut;
				d.ekle(dizi,boyut);
				break;
			case 2:
				cout<<"\nDizi boyutu: ";
				cin>>boyut;
				d.goster(dizi,boyut);
				cout<<"\nSilmek istedigin elemani yaz: ";
				cin>>eleman;
				for(int i=0;i<boyut;i++) {
					if(eleman==dizi[i]) {
						dizi[i] = 0;
					}
				}
				d.goster(dizi, boyut);
				break;
			case 3:
				cout<<"\nDizi boyutu: ";
				cin>>boyut;
				d.goster(dizi, boyut);
				break;
			case 4:
				cout<<"\nDizi boyutu: ";
				cin>>boyut;
				int ek;
				cout<<"\nNe kadar yukseltilecek: ";
				cin>>ek;
				d.genislet(dizi, boyut,ek);
				d.goster(dizi, boyut);
				break;
			case 5:
				d.~Dizi();
				delete[] dizi;
				exit(1);
			default:
				cout<<"\nBoyle bi islem yok.\n";
				break;
		}
	}
}

