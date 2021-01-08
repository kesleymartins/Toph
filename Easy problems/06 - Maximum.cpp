#include <iostream>

using namespace std;

int main() {

	int n, maior;

	cin >> n;

	int array[n];

	for (int i=0; i<n; i++) {

		cin >> array[i];
	}

	maior = array[0];

	for (int i=1; i<n; i++) {

		if (array[i] > maior) {
			maior = array[i];
		} 
	}

	cout << maior << endl;

	return 0;
}