#include <iostream>
using namespace std;

class remoteLampu {
private:
	string setSaklarNo[10];
public:
	void setSaklarNo(int i, string value) {
		setSaklarNo[i] = value;
	}
	string getSaklarNo(int i) {
		return setSaklarNo[i];
	}
};

int main() {
	remoteLampu LampuRumah;

	LampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
	lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
	lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
	lampuRumah.setSaklarNo(3."Lampu Dapur");

	cout << lampuRumah.getSaklarNo(0) << endl;
	cout << lampuRumah.getSaklarNo(1) << endl;
	cout << lampuRumah.getSaklarNo(2) << endl;
	cout << lampuRumah.getSaklarNo(3) << endl;

	return 0;
} 
	


		