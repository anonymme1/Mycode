#include <iostream>
using namespace std;

class Liste {
	protected:
		int veri;
		Liste *next;
		Liste *baslik;
	public:

		Liste() {
			cout<<"\nEkleme    >> 1\n";
			cout<<"\nSilme     >> 2\n";
			cout<<"\nListeleme >> 3\n";
			cout<<"\nSayma     >> 4\n";
			cout<<"\nCikis     >> 5\n";
		}


		void Ekle(int a) {
			Liste *yeni = new Liste;
			yeni->veri = a;
			yeni->next = 0;
			Liste *p = baslik;
			if(p==0) {
				baslik = yeni;
			}

			else {
				while(p->next!=0) {
					p = p->next;
					p->next = yeni;
				}
			}
		}

		void Sil(int a) {
			Liste *p = baslik;
			Liste *temp = p;

			if(p==0) {
				cout<<"\nListede eleman yok.\n";
			}
			else if(p->next == 0 && p->veri == a) {
				delete p;
				baslik = 0;
			}
			else if(p==baslik&&p->veri==a) {
				baslik = p->next;
				delete p;
			}
			else {
				p=p->next;
				while(p) {
					if(p->veri == a) {
						temp->next = p->next;
						break;
					}
					p=p->next;
					temp=temp->next;
				}

				if(p==0) {
					cout<<"\nEleman yok.\n";
				}
				else {
					delete p;
				}
			}
		}

		void Listele() {
			Liste *p = baslik;
			int i=1;
			if(p==0) {
				cout<<"\nListe bos.\n";
			}
			else {
				while(p) {
					cout<<i<<". deger > "<<p->veri<<"\n";
					p=p->next;
					i++;
				}
			}
		}

		int Say() {
			int i=0;
			Liste *p = baslik;
			while(p) {
				p=p->next;
				i++;
			}
			return i;
		}
};

int main() {
	Liste l;
	int islem;
	int i;
	while(1) {
		cout<<"\nİslem sec: ";
		cin>>islem;
		switch(islem) {
			case 1:
				cout<<"\nEklemek istedigin sayi: ";
				cin>>i;
				l.Ekle(i);
				break;
			case 2:
				cout<<"\nSilmek istedigin sayi: ";
				cin>>i;
				l.Sil(i);
				break;
			case 3:
				l.Listele();
				break;
			case 4:
				cout<<"\nListedeki sayi >> "<<l.Say()<<"\n\n";
				break;
			case 5:
				cout<<"\nCikis yapiliyo.\n";
				exit(1);
				break;
			default:
				cout<<"\nYanlis secim.\n";
		}
	}
}
