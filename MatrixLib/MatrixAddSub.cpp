#include"stdafx.h"
#include "MatrixLib.h"
#include<iostream>
#include<conio.h>

using namespace std;

namespace MatrixLib
{
	void  Add(int matrix1[10][10], int matrix2[10][10], int row, int col){

		int matrix3[10][10];

		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		}

		cout << "Added Matrix: " << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << matrix3[i][j] << " ";
				if (j == row - 1)
					cout << endl;
			}
		}
	}


	void MatrixLib::Subtract(int matrix1[10][10], int matrix2[10][10], int row, int col){
		int matrix3[10][10];
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
			}
		}

		cout << "Subtracted Matrix: " << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << matrix3[i][j] << " ";
				if (j == row - 1)
					cout << endl;
			}
		}
	}

}
