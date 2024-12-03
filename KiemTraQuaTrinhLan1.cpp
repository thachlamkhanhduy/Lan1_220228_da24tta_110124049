#include <stdio.h>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

bool isValidDay(int day) {
	return (day >= 28 && day <=31);
}

void inputExpenditure(vector<float>& expenditure, int days) {
	for (int i = 0; i < days; i++) {
		float expence;
		cout << "Nhap chi tieu cho ngay " << i + 1 << ": ";
		cin >> expence;
		while (expence < 0); {
			cout ("Chi tieu phai la so duong. Nhap lai: ");
			cin >> expence;
			}
			expenditure.push_back(expence);
		}
	}
	
void displayExpenditure(const vector<float>& expenditure) {
	cout << "\nChi tieu trong thang: " << endl;
	for (size_t i = 0; i < expenditure.size(); i++) {
		cout << "Ngay " << i + 1 << ": " << fixed << setprecision(2) << expenditure[i] << " dong" << endl;
	}
}

float totalExpenditure(const vector<float>& expenditure) {
	float total = 0
	for(float exp: expenditure) {
		total += exp;
	}
	return total;
}


	



	
	
