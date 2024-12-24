#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

// Deklarasi global
int i, pilih, pilihan, pilihanEdit, itemIndex, stokGanti;
string username, password;

// Data pengguna
string user[5] = {"Hendri", "Dzaky", "Selgy", "Nabil", "Nisa"};

// Data makanan
string food[15] = {        
    "Sari Roti", "Asahi Sardines", "Topoki", "Instant Noodle Udon", "Oreo", "Biskuit", "Taro", 
    "OOPS Cracker", "Roma Sari Gandum", "Happy Tos", "Oat Quaker", "Beng-Beng", "Slai O'lai", 
    "Good Time", "Nextar"
}; 
int foodStock[15] = {50, 30, 20, 40, 45, 35, 25, 30, 40, 35, 25, 50, 40, 30, 35};

// Data minuman
string drink[15] = {
    "Nestle Bear Brand", "Coca Cola", "Fanta", "Susu", "Aqua", "Yogurt", "Le Minerale", 
    "Pocari Sweat", "Fruit Tea", "Jasmine Tea", "Juice Kacang Hijau", "Buavita Guava", 
    "Floridina Juice Pulp Orange", "Nutrisari Juice Drink", "Greenfield Uht Milk"
};
int drinkStock[15] = {40, 50, 45, 35, 60, 30, 55, 25, 40, 35, 20, 30, 25, 35, 40};

// Data sembako
string groceries[15] = {
    "Beras", "Telur Ayam", "Margarine", "Saus Tiram", "Minyak Goreng", "Tepung Tapioka", 
    "Bawang Merah", "Gula Pasir", "Gula Batu", "Gula Jawa", "Mie Telur", "Tepung Sagu", 
    "Tepung Tapioka", "Tepung Terigu", "Tepung Beras"
};
int groceriesStock[15] = {100, 60, 40, 25, 50, 35, 45, 50, 30, 25, 40, 35, 30, 45, 40};

// Data alat rumah tangga
string homeAppliance[15] = {
    "Gayung", "Ember", "Gantungan Handuk", "Sikat Gigi", "Rak", "Keset", "Wajan", 
    "Alat Penanak Nasi", "Setrika", "Mixer", "Blender", "Tempat Sampah", "Sapu", 
    "Kain Pel", "Kain Lap"
};
int homeApplianceStock[15] = {20, 15, 25, 50, 10, 30, 5, 3, 4, 2, 3, 10, 15, 20, 25};


//menu login
void login() {
    bool authenticated = false;
    while (!authenticated) {
        system("cls");
        cout << "+====================================+" << endl;
        cout << "|             L O G I N              |" << endl;
        cout << "+====================================+" << endl;
        cout << " Masukkan username\t: "; cin >> username;
        cout << " Masukkan password\t: "; cin >> password;
        for (int i = 0; i < 5; i++) {
            if (username == user[i] && password == "admin123") {
                authenticated = true;
                break;
            }
        }
        if (!authenticated) {
            cout << "Username atau password salah. Silakan coba lagi." << endl;
            system("pause");
        }
    }
    cout << "+====================================+" << endl;
    cout << "Login berhasil!" << endl;
    
    system("pause");
}

//menu utama
void menu(){
    system("cls");
    cout << "+-----------------------------+" << endl;
    cout << "|          MENU UTAMA         |" << endl;
    cout << "|-----------------------------|" << endl;
    cout << "| 1. Lihat Data Persediaan    |" << endl;
    cout << "| 2. Edit Data Persediaan     |" << endl;
    cout << "| 3. Keluar                   |" << endl;
    cout << "+-----------------------------+" << endl;
    cout << "PILIH MENU : "; cin >> pilih;
}

//tabel makanan
void menuMakanan(){
    cout << "+-----------------------------------------------------------+" << endl;
    cout << "|                        DATA MAKANAN                       |" << endl; 
    cout << "|-----------------------------------------------------------|" << endl;
    cout << "| NO | MAKANAN                                     | JUMLAH |" << endl;
    cout << "|-----------------------------------------------------------|" << endl;
    for(int x=0;x<=14;x++){
    cout << setfill(' ') << left << "| " << setw(3) << x+1 << "| " << setw(44) << food[x] << "| " << setw(4) << foodStock[x] << "pcs|" << endl;
    }
    cout << "+-----------------------------------------------------------+" << endl;
    system("pause");
}

//tabel minuman
void menuMinuman(){
    cout << "+-----------------------------------------------------------+" << endl;
    cout << "|                        DATA MINUMAN                       |" << endl; 
    cout << "|-----------------------------------------------------------|" << endl;
    cout << "| NO | MINUMAN                                     | JUMLAH |" << endl;
    cout << "|-----------------------------------------------------------|" << endl;
  	for(int x=0;x<=14;x++){
 		cout << setfill(' ') << left << "| " << setw(3) << x+1 << "| " << setw(44) << drink[x] << "|" << setw(4) << drinkStock[x] << " " << "pcs|" << endl;
	}
 	cout << "+-----------------------------------------------------------+" << endl;
  	system("pause");
}

//tabel sembako
void menuSembako(){
	cout << "+-----------------------------------------------------------+" << endl;
    cout << "|                        DATA SEMBAKO                       |" << endl; 
    cout << "|-----------------------------------------------------------|" << endl;
    cout << "| NO | SEMBAKO                                     | JUMLAH |" << endl;
    cout << "|-----------------------------------------------------------|" << endl;
    for(int x=0;x<=14;x++){
	cout << setfill(' ') << left << "| " << setw(3) << x+1 << "| " << setw(44) << groceries[x] << "|" << setw(4) << groceriesStock[x] << " " << "pcs|" << endl;
    }
    cout << "+-----------------------------------------------------------+" << endl;
    system("pause");
}

//tabel alat alat rumah tangga
void menuAlat(){
	cout << "+-----------------------------------------------------------+" << endl;
    cout << "|                   DATA ALAT RUMAH TANGGA                  |" << endl; 
    cout << "|-----------------------------------------------------------|" << endl;
    cout << "| NO | ALAT RUMAH TANGGA                           | JUMLAH |" << endl;
    cout << "|-----------------------------------------------------------|" << endl;
    for(int x=0;x<=14;x++){
        cout << setfill(' ') << left << "| " << setw(3) << x+1 << "| " << setw(44) << homeAppliance[x] << "|" << setw(4) << homeApplianceStock[x] << " " << "pcs|" << endl;
    }
    cout << "+-----------------------------------------------------------+" << endl;
    system("pause");
}

//lihat data persediaan
void one(){
    cout << "+-----------------------------+" << endl;
    cout << "|       DATA PERSEDIAAN       |" << endl;
    cout << "|-----------------------------|" << endl;
    cout << "| 1. Makanan                  |" << endl;
    cout << "| 2. Minuman                  |" << endl;
    cout << "| 3. Sembako                  |" << endl;
    cout << "| 4. ALat Rumah Tangga        |" << endl;
    cout << "| 5. Kembali                  |" << endl;
    cout << "+-----------------------------+" << endl;
    cout << "PILIH MENU : "; cin >> pilihan;
    system("cls");
    switch(pilihan){
        case 1:
        menuMakanan();
        break;

        case 2:
        menuMinuman();
        break;

        case 3:
        menuSembako();
        break;

        case 4:
        menuAlat();
        break;

        case 5:
        menu();
        break;

        default:
        cout << "PILIHAN TIDAK TERSEDIA" << endl;
        system("pause");
        one();
    }
}

//edit data persediaan
void two(){
	const int max = 100, total = 15;
    cout << "+-----------------------------+" << endl;
    cout << "|       DATA PERSEDIAAN       |" << endl;
    cout << "|-----------------------------|" << endl;
    cout << "| 1. Makanan                  |" << endl;
    cout << "| 2. Minuman                  |" << endl;
    cout << "| 3. Sembako                  |" << endl;
    cout << "| 4. ALat Rumah Tangga        |" << endl;
    cout << "| 5. Kembali                  |" << endl;
    cout << "+-----------------------------+" << endl;
    cout << "PILIH MENU : "; cin >> pilihan;
    system("cls");
    switch(pilihan){
        case 1:
        menuMakanan();
        cout << "\nPilih nomor item yang akan diedit: ";
        cin  >> itemIndex;
        cout << endl;
            
        if (itemIndex > 0 && itemIndex <= total) {
            cout << "Pilih aksi:\n";
  		    cout << "1. Tambah Stok\n";
        	cout << "2. Kurangi Stok\n";
            cout << "Pilih : ";
            cin >> pilihanEdit;
                
            cout << "\nMasukkan jumlah: ";
            cin >> stokGanti;
                
            if (pilihanEdit == 1) {
                foodStock[itemIndex-1] += stokGanti;
                cout << "Stok " << food[itemIndex-1] << " ditambah " << stokGanti << endl;
            } 
			else if (pilihanEdit == 2) {
		        if (stokGanti <= foodStock[itemIndex-1]) {
                    foodStock[itemIndex-1] -= stokGanti;
                    cout << "Stok " << food[itemIndex-1] << " dikurangi " << stokGanti << endl;
                    } 
			    else {
                        cout << "Stok tidak mencukupi!\n";
                    }
			}
	    system("pause");
        }
        break;

        case 2:
        menuMinuman();
        cout << "\nPilih nomor item yang akan diedit: ";
        cin  >> itemIndex;
        cout << endl;
            
        if (itemIndex > 0 && itemIndex <= total) {
            cout << "Pilih aksi:\n";
  		    cout << "1. Tambah Stok\n";
        	cout << "2. Kurangi Stok\n";
            cout << "Pilih : ";
            cin >> pilihanEdit;
                
            cout << "\nMasukkan jumlah: ";
            cin >> stokGanti;
                
            if (pilihanEdit == 1) {
                drinkStock[itemIndex-1] += stokGanti;
                cout << "Stok " << drink[itemIndex-1] << " ditambah " << stokGanti << endl;
            } 
			else if (pilihanEdit == 2) {
		        if (stokGanti <= drinkStock[itemIndex-1]) {
                    drinkStock[itemIndex-1] -= stokGanti;
                    cout << "Stok " << drink[itemIndex-1] << " dikurangi " << stokGanti << endl;
                    } 
			    else {
                        cout << "Stok tidak mencukupi!\n";
                    }
			}
        system("pause");
        }
        break;

        case 3:
        menuSembako();
        cout << "\nPilih nomor item yang akan diedit: ";
        cin  >> itemIndex;
        cout << endl;
            
        if (itemIndex > 0 && itemIndex <= total) {
            cout << "Pilih aksi:\n";
  		    cout << "1. Tambah Stok\n";
        	cout << "2. Kurangi Stok\n";
            cout << "Pilih : ";
            cin >> pilihanEdit;
                
            cout << "\nMasukkan jumlah: ";
            cin >> stokGanti;
                
            if (pilihanEdit == 1) {
               groceriesStock[itemIndex-1] += stokGanti;
                cout << "Stok " << groceries[itemIndex-1] << " ditambah " << stokGanti << endl;
            } 
			else if (pilihanEdit == 2) {
		        if (stokGanti <= groceriesStock[itemIndex-1]) {
                    groceriesStock[itemIndex-1] -= stokGanti;
                    cout << "Stok " << groceries[itemIndex-1] << " dikurangi " << stokGanti << endl;
                    } 
			    else {
                        cout << "Stok tidak mencukupi!\n";
                    }
			}
        system("pause");
		}
        break;

        case 4:
        menuAlat();
        cout << "\nPilih nomor item yang akan diedit: ";
        cin  >> itemIndex;
        cout << endl;
            
        if (itemIndex > 0 && itemIndex <= total) {
            cout << "Pilih aksi:\n";
  		    cout << "1. Tambah Stok\n";
        	cout << "2. Kurangi Stok\n";
            cout << "Pilih : ";
            cin >> pilihanEdit;
                
            cout << "\nMasukkan jumlah: ";
            cin >> stokGanti;
                
            if (pilihanEdit == 1) {
                homeApplianceStock[itemIndex-1] += stokGanti;
                cout << "Stok " <<  homeAppliance[itemIndex-1] << " ditambah " << stokGanti << endl;
            } 
			else if (pilihanEdit == 2) {
		        if (stokGanti <=  homeApplianceStock[itemIndex-1]) {
                     homeApplianceStock[itemIndex-1] -= stokGanti;
                    cout << "Stok " <<  homeAppliance[itemIndex-1] << " dikurangi " << stokGanti << endl;
                    } 
			    else {
                        cout << "Stok tidak mencukupi!\n";
                    }
			}
        system("pause");
		}
        break;

        case 5:
        menu();
        break;

        default:
        cout << "PILIHAN TIDAK TERSEDIA" << endl;
        system("pause");
        two();
    }
}

int main(){
	system("cls");
	int nim[5] = {123240047, 123240057, 123240066, 123240071, 123240074};
	string nama[5] = {"Haerunisa", "Dzaky Muammar", "Hendri Prasetyo", "Nabil Priyanka Pasuhuk", "Selgy Pradista Risqi"};
	cout << "Anggota Kelompok: " << endl;
	for(int b=0; b<=4;b++){
		cout << setfill(' ') << left << b+1 << "." << setw(40) << nama[b] << " " << nim[b] << endl; 
	}
	system("pause");
    login();
    for(int a=0; a<=3;a--){
        menu();
        system("cls");
        switch(pilih){
            case 1:
            one();
            break;

            case 2:
            two();
            break;

            case 3:
            return 0;
            break;

            default:
            cout << "Pilihan tidak ada" << endl;
            system("pause");
            menu();
            break;
        }
    }
    return 0;
}
