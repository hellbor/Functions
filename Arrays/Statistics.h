#pragma once

#include"Constants.h"

template<typename T>T Sum(T c_arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>double Avg(T c_arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>T MinValueIn(T c_arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>T MaxValueIn(T c_arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);
template<typename T>double Avg(T arr[], const int n);
template<typename T>T MinValueIn(T arr[], const int n);
template<typename T>T MaxValueIn(T arr[], const int n);