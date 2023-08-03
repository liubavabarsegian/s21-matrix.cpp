#ifndef __S21MATRIX_HPP__
#define __S21MATRIX_HPP__

#include <iostream>
#include <cmath>
#include <cstring>

#define OK
#define FAIL

class S21Matrix {
private:
    // attributes
    // rows and columns attributes
    int rows_, cols_;
    // pointer to the memory where the matrix will be allocated
    double **matrix_;
    void createMatrix(S21Matrix& other);
    void deleteMatrix(S21Matrix& other);
public:
    //constructors and destructors
    S21Matrix();
    S21Matrix(int rows, int cols);
    S21Matrix(const S21Matrix& other);
    S21Matrix(S21Matrix&& other);
    ~S21Matrix();

    // // operators overloads
    // // assignment operator overload
    // S21Matrix& operator=(const S21Matrix& o);
    // // index operator overload
    // int& operator()(int row, int col);
    // int& operator()(int row, int col) const;
    // S21Matrix& operator+=(const S21Matrix& o);
    // S21Matrix operator+(const S21Matrix& o);
    // S21Matrix& operator-=(const S21Matrix& o);
    // S21Matrix operator-(const S21Matrix& o);
    
    // // some public methods
    // bool EqMatrix(const S21Matrix& other);
    // void SumMatrix(const S21Matrix& other);
    // void SubMatrix(const S21Matrix& other);
    // void MulNumber(const double num);
    // void MulMatrix(const S21Matrix& other);
    // S21Matrix Transpose();
    // S21Matrix CalcComplements();
    // double Determinant();
    // S21Matrix InverseMatrix();
};

#endif