/**\ file Matrix.cpp
* brief implementation file for smal matrix library 
* \details ..
* \author Mike Kapetanakis
* \version 0.1
* \date  15/4/2024
*/
#include <cassert>
#include "Matrix.h"
#include <iostream>
using namespace std;

void print matrix(const double mat[][MAX_col], const int maxRow) {
	cout << "\n Content of mnatrix:";
	for (int i = 0; i < maxRow; ++i) {
		cout << "\nR" << i << " : ";
		for (int j = 0; i < MAX_COL; ++j) {
			cout << "\nR" << i << " : ";
		}
		/**
		*Returns the sum of the specified column of the matrix
		* <BR>
		* @param mat the matrix
		* @param column The column to be summed
		* @param The number of rows in the matrix 
		* @param Returns the sum of the specified column
		*/



		double sumofCol(const double mat[][MAX_COL], const int column, const int maxRow)
		{
			assert(maxRow > 0);
			assert(column >= 0 && column < MAX_COL);
			double sum = 0;
			for (int i=0;i<maxRow;++i){

			
		}