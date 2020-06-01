#include <iostream>
#include <vector>
using namespace std;

class Car {
	private:
		struct _info {
			int no;
			string name,surname;
			bool mood=false;
		}info;
		vector<_info>cars;
	public:
		void rent() {
			cout<<"\nİsim: ";
			cin>>info.name;
			cout<<"\nSpyisim: ";
			cin>>info.surname;
			a:
			cout<<"\nPlaka: ";
			cin>>info.no;
			for(int i=0;i<cars.size();i++) {
				if(cars[i].no==info.no) {
					if(cars[i].mood!=0) {
						cout<<"\nArac kirada.\n";
						goto a;
					}
					else {
						cars[i].mood=true;
						break;
					}
				}
			}
			cars.push_back(info);
			cout<<"\nArac kiralandi.\n";
		}

		void print() {
			for(int i=0;i<cars.size();i++) {
				cout<<i+1<<". Arac: ";
				cout<<"\n\tİsim    > "<<cars[i].name;
				cout<<"\n\tSoyisim > "<<cars[i].surname;
				cout<<"\n\tPlaka   > "<<cars[i].no;
				cout<<"\n\tDurum   > "<<cars[i].mood<<"\n";
			}
			cout<<"\n";
		}

		void mainMenu() {
			cout<<"\nKiradaki araclari gostermek icin 1";
			cout<<"\nArac kiralamak icin              2";
			cout<<"\nArac teslimi icin                3";
			cout<<"\nCikis icin                       4";
			cout<<"\n";
		}

		void del() {
			int number;
			cout<<"\nTeslim edecegin aracin plakasi: ";
			cin>>number;
			for(int i=0;i<cars.size();i++) {
				if(cars[i].no==number) {
					cout<<"\nKiralayan > "<<cars[i].name<<" "<<cars[i].surname<<"\n";
					cars[i].mood = false;
					cars.erase(cars.begin());
					cout<<"\nArac teslim edildi.\n";
					break;
				}
			}
		}

};

int main() {
	Car c;
	int operation;
	while(1) {
		c.mainMenu();
		cout<<"\nİslem sec: ";
		cin>>operation;
		switch(operation) {
			case 1:
				c.print();
				break;
			case 2:
				c.rent();
				break;
			case 3:
				c.del();
				break;
			case 4:
				exit(1);
				break;
			default:
				cout<<"\nİslem bulunamadi.\n";
		}
	}
	return 0;
}
