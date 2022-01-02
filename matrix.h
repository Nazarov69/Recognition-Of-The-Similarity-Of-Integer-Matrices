#pragma once
#include <vector>
#define dimension 2
class similar {
	int eigenvalue_�1;
	int eigenvalue_�2;
	int eigenvalue;
	int NOD(int a, int b);
	int gcd(int a, int b, int& x, int& y);
	public:
		std::vector<int> similar_matrix(std::vector<int> & matr);
		void similar_matrix_with_negative_element(std::vector<int>& matr);
		void first_interval(std::vector<int>& matr);
		void second_interval(std::vector<int>& matr);
		int get_eigenvalue_A1() { return eigenvalue_�1; }
		int get_eigenvalue_A2() { return eigenvalue_�2; }
		int get_eigenvalue() { return eigenvalue; }
};