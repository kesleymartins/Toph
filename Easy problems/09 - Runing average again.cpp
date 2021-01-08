#include <iostream>

using namespace std;

int main() {

	int n; 
	double sum;

	cin >> n;

	int array[n];

	for (int i=0; i<n; i++) {

		cin >> array[i];
	}

	for (int i=0; i<n; i++) {
		sum = 0;

		for (int j=0; j <= i; j++) {
			sum += array[j];
		}

		cout << sum/(i+1) << endl;
	}

	return 0;
}