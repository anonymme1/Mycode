#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

int main(int argc, char **argv[]) {
        string dosyaAdi;
        cin.ignore();
        cout<<"\nKiracagin dosyanin adini gir: ";
        cin>>dosyaAdi;
        string dizi="1234567890poiuytreasdfghjklmnbvcxzqw";
        int denemeSayisi,kacKarakter;
        cout<<"\nKac kez denensin: ";
        cin>>denemeSayisi;
        cout<<"\nKac karakterli sifre olsun: ";
        cin>>kacKarakter;
        char komut[100];
        int ek;
        for(int i=0;i<denemeSayisi;i++) {
                string sifre;
                for(int j=0;j<kacKarakter;j++) {
                        sifre += dizi[rand()%dizi.size()];
                }
                ek = sprintf(komut,"unrar e -p%s %s",sifre.c_str(),do>
                int a = system(komut);
                if(a==EXIT_SUCCESS) {
                        cout<<"\nDogru sifre >> "<<sifre<<endl;
                        break;
                }
                else {
                        cout<<"\nSifre yanlis >> "<<sifre<<endl;
                }
        }
}
