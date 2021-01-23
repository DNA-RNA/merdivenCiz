#include<iostream>

using namespace std;

void merdivenCiz() {
	int basamakSayisi;
	cout << "Basamak sayisini giriniz:";
	cin >> basamakSayisi;
	for (int bs = basamakSayisi;bs > 0;bs--) {
		for (int i = 1;i < bs;i++) 
			cout << "   ";
			cout << "***" << endl;
		for (int j = 1;j <bs;j++) 
			cout << "   ";
			cout << "*" << endl;
	}
	
}

int main() {

merdivenCiz();

return 0;

}
