#include <iostream>

using namespace std;

int main()

{
    int parola;
    int aktif_para;
    int eylem;
    int girdi;
    
    aktif_para = 2000;
    
    cout << "dort haneli parolanizi giriniz" << endl;
    
    parola = 6161;
    
    cout << "xxxx= ";
    cin >> parola;
    cout << endl;
    
    if (cin.fail()) {
        cout << "Lutfen sayi giriniz!!!\n" << endl;
    }
    else {
        if (parola != 6161) {
            cout << "erisim reddedildi\n";
        }
        else {
            cout << "Ne yapmak istersiniz?       " << "Guncel Bakiye= " << aktif_para << "TL" << endl;  
            cout << endl;
            cout << "1.Para cekme    2.Para yatirma    3.cikis yap" << endl << endl;
            
            cin >> eylem;
            
            if (eylem == 1) {
                cout << endl << "Cekmek istediginiz tutari giriniz.\n" << endl;
                cin >> girdi;
                cout<< endl;
                
                if (girdi > aktif_para) {
                    cout << "Yetersiz bakiye!\n";
                } 
                else {
                    aktif_para = aktif_para - girdi;
                    cout << "Mevcut bakiye= " << aktif_para << "TL";
                }
            }
            else if (eylem == 2) {
                cout << endl << "Yatirmak istediginiz tutari girin\n";
                cout<< endl;
                cin >> girdi;
                cout<< endl;
                aktif_para = aktif_para + girdi;
                cout << "Mevcut bakiye= " << aktif_para << "TL" <<endl;
            }
            else if (eylem == 3) {
                cout << "cikis yapildi\n";
            }
            else {
                cout << "gecersiz komut\n";
            }
        }
    }
    cout << endl;
    system("pause");
    return 0;
}
