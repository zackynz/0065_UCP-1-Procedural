//2. #include <iostream>
//using namespace std;

//int main() {
//    string status;

//    cout << "Masukan nilai Matematika";
//    cin >> nMat;
//    cout << "Masukan nilai Fisika = ";
//    cin >> nFisika;

//    rerata = (nFisika + nMat) / 2;

//    if (nFisika > 60) {
//        status = "Lulus jalur rerata";
//    }
//    else if (nMat > 70) {
//        status = "Lulus jalur matematika"
//            ;
//    }
//    else
//    {
//        status = "Tidak Lulus";
//    }

//    cout << "Statusnya adalah" << status << endl;

//    return 0;

//}


//3. #include <iostream>
//using namespace std;

//struct DetailAlamat {
//    string desa;
//    string kota;
//};

//struct Mahasiswa {
//  string nim;
//  string nama;
//    DetailAlamat alamat;
//    int umur;
//};

//int main() {
//    Mahasiswa mhs[3];
//    for (int i = 0; i < 3; i++) {
//        cout << "Data ke-" << (i + 1) << ":" << endl;
//        cout << "Nomor Mahasiswa : ";
//        getline(cin, mhs[i].nim);
//        cout << "Nama Mahasiswa : ";
//        getline(cin, mhs[i].nama);

//        cout << "Alamat Mahasiswa : " << endl;
//        cout << "\t Nama Desa : ";
//        cin >> mhs[i].alamat.desa;
//        cout << "\t Nama Kota : ";
//        cin >> mhs[i].alamat.kota;
//        cout << "Umur Mahasiswa : ";
//        cin >> mhs[i].umur;
//        cin.ignore(1, 'n');
//    }

//    for (int i = 0; i < 3; i++) {
//        cout << endl;
//        cout << "Data Mahasiswa ke-" << (i + 1) << " : " << endl;
//        cout << "\n NIM : " << mhs[i].nim;
//        cout << "\n Nama : " << mhs[i].nama;
//        cout << "\n Alamat : ";
//        cout << "\n \t Desa : " << mhs[i].alamat.desa;
//        cout << "\n \t Kota : " << mhs[i].alamat.kota;
//        cout << "\n Umur : " << mhs[i].umur;
//        cout << endl;

//    }
//}



//5.
//PROSEDUR WHILE
// #include <iostream>
//using namespace std;

//int main() {

//    int bilangan;

//    srand(time(0));

//    bilangan = rand() % 12;

//    while (bilangan % 2) {
//        cout << bilangan << endl;
//        cout << "Maka bilangannya ganjil" << endl;

 //       bilangan = rand() % 12;

 //   }
 //   cout << bilangan << endl;
 //   cout << "Bilangannya genap" << endl;

//}
// PROSEDUR FOR
// #include <iostream>
//using namespace std;

//int main()
//{
//    int i;
//    int arr[5];

//    for (i = 0; i < 5; i++)
//    {
//        cout << i << " : " << "Zacky" << endl;
//    }

 //   for (i = 0; i < 5; i++) {
 //       cout << "Masukkan Nama = ";
 //       cin >> arr[i];

 //   }

//    for (i = 0; i < 5; i++) {
//        cout << "Nama ke - " << i << " : " << arr[i] << endl;
//    }
//}
// 
// PROSEDUR DO WHILE
// #include <iostream>
//using namespace std;

//int main() {
//    char pilihan;


//    do {
//        cout << "Berangkat ambil takjil" << endl;
//        cout << "Antri Takjil" << endl;
//        cout << "Ambil Takjil" << endl;
//        cout << "Apakah mau antri kembali ?" << endl;
//        cin >> pilihan;
//    } while (pilihan == 'y' || pilihan == 'Y');
//}
// FUNGSI
// #include <iostream>
//using namespace std;

//string nama;
//int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
//int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;


//void input() {
//    cout << "Nama Pembeli : ";
//    cin >> nama;
//    cout << "Jumlah Xpander : ";
//    cin >> nXpander;

//    cout << "Jumlah Proche  : ";
//    cin >> nPorsche;

//    cout << "Jumlah Avanza : ";
//    cin >> nAvanza;

//    cout << "Jumlah Brio : ";
//    cin >> nBrio;

//    cout << "Jumlah Lamorghini  : ";
//    cin >> nLamborghini;
//}

//int TotalHarga() {
//    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini);
//}

//void Display() {
//    cout << "Total Harganya : " << TotalHarga() << endl;
//}

//int main() {
//    char pilihan;
//    do {
//        input();
//        Display();
//        cout << "Apakah ingin membeli kembali ? ";
//        cin >> pilihan;
//    } while (pilihan == 'y' || pilihan == 'Y');
//}



//4. #include <iostream>
//using namespace std;

//class bangunDatar {


//private:
//    float panjang, lebar;
//public:
//    float luas;

//    void input() {

//        cout << "Masukan Panjangnya = ";
//        cin >> panjang;
//        cout << "Masukan Lebarnya = ";
//        cin >> lebar;
//    }

//    float hitungluas() {
//        return panjang * lebar;
//    }

//    void display() {
//        cout << "Panjangnya = " << panjang << endl;
//        cout << "Lebarnya = " << lebar << endl;
//        cout << "Luasnya = " << hitungluas() << endl;
//    }
//};

//int main() {
//    bangunDatar pp;
//    pp.input();
//    pp.display();

//    return 0;
//}



//6

#include <iostream>

using namespace std;

int main() 
{
    string status;

    cout << "Masukan nilai Bahasa Inggris";
    cin >>  nBig;
    cout << "Masukan nilai Matematika = ";
    cin >> nMat;
    cout << "rerata";

    rerata = (nBig + nMat) / 2;

    if (nBig > 70 ) {
        status = "Lulus jalur rerata";
    }
    else if (nMat > 80) {
        status = "Lulus jalur matematika";
            
    }
    else
    {
        status = "Tidak Lulus";
    }

    cout << "Statusnya adalah" << status << endl;

    string nama;
    int nAsroni, nLia, nJoko;
    int hAsroni = 80, hLia = 70, hJoko = 50;


    void input();
    {
        cout << "Nama Mahasiswa : ";
        cin >> nama;
        cout << "Status Asroni : ";
        cin >> nAsroni;

        cout << "Status Lia  : ";
        cin >> nLia;

        cout << "Status Joko : ";
        cin >> nJoko;


    }

    

    void Display() {
        cout << "Status Mahasiswa : " << StatusMahasiswa() << endl;
    }

    int main() {
        char pilihan;
        do{
            input();
            Display();
            cout << "Apakah akan mengulang program ? ";
            cin >> pilihan;
        } while (pilihan == 'y' || pilihan == 'Y');
    }

    return 0;

}
