#include <iostream>
using namespace std;

void Menu(){
cout << "Pilihan yang tersedia: " << endl;
cout << "1. Gunting" << endl;
cout << "2. Batu" << endl;
cout << "3. Kertas" << endl;
}

int main (){
  int pemain1, pemain2, pilihan_pemain1, pilihan_pemain2;
  cout << "==========Permainan Dimulai==========" << endl << endl;
  cout << "Pemain 1, tentukan pilihan anda!" << endl;
  Menu():
  cout << "Masukan pilihan: ";
  cin >> pilihan_pemain1;
  switch(pilihan_pemain1){
    case 1 : pilihan_pemain1 = 1;
      break;
    case 2 : pilihan_pemain1 = 2;
      break;
    case 3 : pilihan_pemain1 = 3;
      break;
    default: cout << "plihan tidak tersedia" << endl;
      return 0;
  } cout << endl;

   cout << "Pemain 2, tentukan pilihan anda! " << endl;
        Menu();
        cout << "Masukkan pilihan : ";
        cin >> pilihan_pemain2;
        switch(pilihan_pemain2){
            case 1: pilihan_pemain2 = 1;
            break;
            case 2: pilihan_pemain2 = 2;
            break;
            case 3: pilihan_pemain2 = 3;
            break;
            default: cout << "pilihan tidak tersedia" << endl;
            return 0;
        } cout << endl;
        
        cout << "Pemain 1" << "        " << "Pemain 2"<<endl;
        
         switch (pilihan_pemain1) {
            case 1: cout << "Gunting    VS ";
            break;
            case 2: cout << "Batu      VS ";
            break;
            case 3: cout << "Kertas       VS ";
            break;
            default: cout << "pilihan tidak tersedia" << endl;
            break;
           }

return 0;
}
