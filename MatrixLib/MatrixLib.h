// MatrixLib.h
#ifdef MATRIXLIB_EXPORTS
#define MATRIXLIB_API __declspec(dllexport)
#else
#define MATRIXLIB_API __declspec(dllimport)
#endif
// MatrixLib.h

#pragma once



namespace MatrixLib {



			void Add(int matrix1[10][10], int matrix2[10][10], int row, int col);

			void Subtract(int matrix1[10][10], int matrix2[10][10], int row, int col);

			void Transpose(int arr[10][10], int row, int col);

}
