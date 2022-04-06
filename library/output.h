using namespace std;

class Output {
	public :
		void cetak(){
			cout << "STRUK PEMBELIAN RUMAH MAKAN SEDERHANA \n";
			cout << "Yang dibeli : \n";
      cout << "  Ayam Geprek  -> " << data_file[3] << endl;
      cout << "  Ayam Goreng  -> " << data_file[4] << endl;
      cout << "  Udang Goreng -> " << data_file[5] << endl;
			cout << "  Cumi Goreng  -> " << data_file[6] << endl;
			cout << "  Ayam Bakar   -> " << data_file[7] << endl;
			cout << "Harga total Rp. " << data_file[0] << endl;
			cout << "Pembayaran  Rp. " << data_file[1] << endl;
			cout << "Kembalian   Rp. " << data_file[2] << endl;
      
		}

		void getData(){
			ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

	private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};