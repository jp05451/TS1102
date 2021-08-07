#include<vector>
#include<iostream>

#pragma once

using namespace std;

class Matrix
{
public:
				void SetsizeA(int a,int b);
				void SetsizeB(int a, int b);
				void SetmatrixA();
				void SetmatrixB();
				void Caculate();
				void clear();
				friend double operator *(vector<double> a, vector<double> b);
private:
				vector<vector<double>> A;
				vector<vector<double>> B;
				vector<vector<double>> ANS;
};