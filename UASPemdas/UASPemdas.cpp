#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;  
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
		virtual void cekKelulusan() {}
		virtual void input() {}

		void setP( float nilai) {
			this -> presensi = nilai;
		}
		float getP() {
			return presensi;
		}
		//          

		void setA(float nilai) {
			this -> activity = nilai;
		}

		float getA() {
			return activity;
		}

		void setE(float nilai) {
			this -> exercise = nilai;
		}

		float getE() {
			return exercise;
		}

		void setUA(float nilai) {
			this -> tugasAkhir = nilai;
		}

		float getUA() {
			return tugasAkhir;
		}
};

class Pemrograman : public MataKuliah { //
public :
	float hitungNilaiAkhir() {
		return 
	}

	void cekKelulusan() {
		float NA = hitungNilaiAkhir();
		if (NA > 75) {
			cout << "selamat, anda lulus mata kuliah pemrograman dengan nilai akhir" << NA << endl;
		}
		else {
			cout << "maaf, anda tidak lulus mata kuliah pemrograman" << endl;
		}	
	}

	void input() {
		cout << "masukkan nilai presensi : ";
		float p = getP();
		cin >> p;
		setP(p);

		cout << "masukkan nilai activity : ";
		float a = getA();
		cin >> a;
		setA(a);

		cout << "masukkan nilai exercise : ";
		float e = getE();
		cin >> e;
		setE(e);

		cout << "masukkan nilai ujian akhir :";
		float ua = getUA();
		cin >> ua;
		setUA(ua);
	}
};

int main() {
	cout << "program dibuat" << endl;
	char pilihan;

	do {
		Pemrograman pemro;
		pemro.input();
		pemro.cekKelulusan();

		cout << "apakah anda ingin mengulang program? (Y/N)";
		cin >> pilihan;
		cout << endl;

	} while (pilihan == 'Y' || pilihan == 'y');

	return 0;
}
