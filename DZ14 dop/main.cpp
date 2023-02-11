#include <iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	
	std::cout << " Задача 1 \n";
	srand(time(NULL));
	const int A = 10;
	int arr[A][A];
	for (int i = 0; i < A; i++){
		for (int j = 0; j < A; j++) {
			arr[i][j] = rand() % 11;

		std::cout << arr[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	int Q = 0;
	int sum;
	while (Q < A) {
		sum = 0;
		for (int i = 0; i < A; i++) {
			for (int j = 0; j < A; j++) {
				if (j == Q)
					sum += arr[i][j];
			}
		}
		std::cout << (double)sum / A << '\t';
	Q++;
	}
	
	
	std::cout << "\n\n Задача 2 \n";
	int a = 0;
	int b = 1;
	
	const int size2 = 10;
	int arr2[size2][size2];
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size2; j++) {
			if (i % 2 == 0) {
				std::swap(a, b);
				arr2[i][j] = b;
			}
			else {
				std::swap(a, b);
				arr2[i][j] = a;
			}
		}
	}
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size2; j++)
			std::cout << arr2[i][j] << '\t';
		//std::cout << '\n';
	}
	std::cout << '\n';
	
	std::cout << "\n\n Задача 3 \n";
	int n;
	int arr3[10][2];
	for (int i = 0; i < 10; i++) 
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				std::cout << " Введите число - ";
				std::cin >> arr3[i][j];
			}
			else
				arr3[i][j] = i * arr3[i][0];
		}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++)
			std::cout << arr3[i][j] << '\t';
		std::cout << '\n';
	}
	

	std::cout << "\n\n Задача 4 \n\n";
	int m = 0;
	int arr4[5][5];
	for (int i = 0; i < 5; i++) {
		if (i == 0)
			for (int j = 0; j < 5; j++) {
				arr4[i][j] = m;
				m++;
			}
		else
			if (i > 0 && i < 4)
				for (int j = 0; j < 5; j++) {
					if (j == 4) {
						arr4[i][j] = m;
						m++;
					}
				}
			else
				if (i == 4)
					for (int j = 4; j >= 0; j--) {
						arr4[i][j] = m;
						m++;
					}
	}
	for (int i = 3; i > 1; i--) 
		for (int j = 0; j < 5; j++)
			if (j == 0) {
				arr4[i][j] = m;
				m++;
			}
	for (int i = 0; i < 4; i++) {
		if (i == 1)
			for (int j = 0; j < 4; j++) {
				arr4[i][j] = m;
				m++;
			}
		else
			if (i == 2 )
				for (int j = 0; j < 5; j++) {
					if (j == 3) {
						arr4[i][j] = m;
						m++;
					}
				}
			else
				if (i == 3)
					for (int j = 3; j > 0; j--) {
						arr4[i][j] = m;
						m++;
					}
	}
	for (int i = 0; i < 5; i++) {
		if (i == 2)
			for (int j = 1; j < 3; j++) {
				arr4[i][j] = m;
				m++;
			}

	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			std::cout << arr4[i][j] << '\t';
		std::cout << '\n';
	}
	std::cout << "\n\n";



	return 0;
}