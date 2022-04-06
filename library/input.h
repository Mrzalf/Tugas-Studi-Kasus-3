using namespace std;

class Input {
	public :
		void cetak(){
			cout << "Rumah Makan Sederhana \n";
			cout << "Menu yang tersedia : \n";
      cout << "1. Ayam Geprek  Rp. 21000 \n";
			cout << "2. Ayam Goreng  Rp. 17000 \n";
      cout << "3. Udang Goreng Rp. 19.000 \n";
      cout << "4. Cumi Goreng  Rp. 20.000 \n";
			cout << "5. Ayam Bakar   Rp. 21000 \n\n";
      cout << "Pesan Ayam Geprek  -> "; cin >> bnyk_aymGp;
			cout << "Pesan Ayam Goreng  -> "; cin >> bnyk_aymGr;
      cout << "Pesan Udang Goreng  -> "; cin >> bnyk_udgGr;
      cout << "Pesan Cumi Goreng  -> "; cin >> bnyk_cmiGr;
			cout << "Pesan Ayam Bakar  -> "; cin >> bnyk_aymBk;
      cout << "Masukan jarak dari restoran ke rumah anda :";cin>>jrk;
		}

		void toFile(){
			tulis_data.open("api_data.txt");
      tulis_data << bnyk_aymGp << endl;
			tulis_data << bnyk_aymGr << endl;
      tulis_data << bnyk_udgGr << endl;
      tulis_data << bnyk_cmiGr << endl;
			tulis_data << bnyk_aymBk << endl;
      tulis_data << jrk;
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int bnyk_aymGp, bnyk_aymGr, bnyk_udgGr, bnyk_cmiGr,   bnyk_aymBk, jrk, total, bayar;
};