#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main()
{
	int soruSayi, i = 0, puan = 0;
	string  ogrenciSatiri;
	int ogrenciSayisi = 0;
	string cevapAnahtari, ogrenci, cevap;
	fstream inputAl;
	inputAl.open("input.txt");

		inputAl >> soruSayi;
		inputAl >> cevapAnahtari;                      // cevap anahtarini atadim burada bir sekilde umarim calisir.
		cout << soruSayi << endl;
		cout << cevapAnahtari << endl;

		while (!inputAl.eof())											// ogrenci sayisini ogrendim burda bir sekilde
		{
			getline(inputAl, ogrenciSatiri);							
				ogrenciSayisi++;
		}
		inputAl.close();
		ogrenciSayisi = ogrenciSayisi - 2;
		cout << ogrenciSayisi;
		inputAl.clear();
		inputAl.seekg(0);

		ifstream dosac;
		dosac.open("input.txt");

		while (dosac)												//burada ogrenci giris kismindaki virgullerden kurtulmaya calistim.
		{
			getline(dosac, ogrenci, ',');
			dosac >> ogrenci;

		}


		/*if({
			cevap = cevapAnahtari;
				puan + 4;
		}
		else if
		{
			cevap != cevapAnahtari;
				puan + 0;
		}
		else
			puan - 1;
		*/
		dosac.close();
		





































































































































		ofstream sad;
		sad.open("output.txt");



		sad << "basaramadim" << endl;

	return 0;
}





// i have failed this task. 