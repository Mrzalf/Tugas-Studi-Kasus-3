using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_geprek = true;
      bool ayam_goreng = false;
      bool udang_goreng = false;
      bool cumi_goreng = false;
      bool ayam_bakar = false;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data >> bnyk_aymGp;
					ayam_geprek = false;
          ayam_goreng = true;
				}else if(ayam_goreng){
          ambil_data >> bnyk_aymGr;
					ayam_goreng = false;
          udang_goreng = true;
        }else if(udang_goreng){
          ambil_data >> bnyk_udgGr;
					udang_goreng = false;
          cumi_goreng = true;
        }else if(cumi_goreng){
          ambil_data >> bnyk_cmiGr;
					cumi_goreng = false;
          ayam_bakar = true;
        }else if(ayam_bakar){
          ambil_data >> bnyk_aymBk;
					ayam_bakar = false;
        }else{
					ambil_data >> jrk;
				}
			}
			ambil_data.close();
		}

		void toFile(){
			int harga = (hrg_aymGp * bnyk_aymGp) +(hrg_aymGr * bnyk_aymGr) +(hrg_udgGr * bnyk_udgGr) + (hrg_cmiGr * bnyk_cmiGr) + (hrg_aymBk * bnyk_aymBk);

      if (jrk <= 3){

      if (harga <= 25000){
      total = harga + 15000;
      }
      else  if ((harga > 25000) && (harga <= 50000)){
      cout << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      total = harga + 12000;
      }
      else if ((harga > 50000) && (harga <= 150000)){
      cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      diskon = harga * 0.15;
      total = harga - diskon + 10000;    
      }
      else if ((harga > 150000)){
      cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      diskon = harga * 0.35;
      total = harga - diskon + 7000;
      
    }
  }

  else if (jrk > 3){

    if (harga <= 25000){

    total = harga + 25000;
    
  }

     if ((harga > 25000) && (harga <= 50000)){

      cout << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      total = harga + 22000;
      
    }
    else if ((harga > 50000) && (harga <= 150000)){

      cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      diskon = harga * 0.15;
      total = harga - diskon + 20000;
    ;
  
  }

    else if ((harga > 150000)){

      cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      diskon = harga * 0.35;
      total = harga - diskon + 17000;
      
      
    }
  }

  cout <<"\nTotal Harga : " << total;
  cout << "\nMasukkan Uang Anda : ";
  cin >> bayar;
  kembali = bayar - total;

      
			tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << bayar << endl;
			tulis_data << kembali << endl;
      tulis_data << bnyk_aymGp << endl;
      tulis_data << bnyk_aymGr << endl;
      tulis_data << bnyk_udgGr << endl;
			tulis_data << bnyk_cmiGr << endl;
			tulis_data << bnyk_aymBk;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_aymGp,bnyk_aymGr,bnyk_udgGr,bnyk_cmiGr,bnyk_aymBk,jrk, total, bayar,kembali,diskon;
    int hrg_aymGp = 21000;
    int hrg_aymGr = 17000;
    int hrg_udgGr = 19000;
		int hrg_cmiGr = 20000;
		int hrg_aymBk = 21000;
};