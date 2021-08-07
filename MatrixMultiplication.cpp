#include"MatrixMultiplication.h"

void Matrix::SetsizeA(int a, int b)
{
				A.resize(a);
				for (int i = 0; i < a; i++)
				{
								A[i].resize(b);
				}
}
void Matrix::SetsizeB(int a, int b)
{
				B.resize(a);
				for (int i = 0; i < a; i++)
				{
								B[i].resize(b);
				}
}
void Matrix::SetmatrixA()
{
				int a = A.size();
				int b = A[0].size();
				for (int i = 0; i < a; i++)
				{
								for (int j = 0; j < b; j++)
								{
												cin >> A[i][j];
												//cout << A[i][j];
								}
								//cout << endl;
				}
}
void Matrix::SetmatrixB()
{
				int a = B.size();
				int b = B[0].size();
				for (int i = 0; i < a; i++)
				{
								for (int j = 0; j < b; j++)
								{
												cin >> B[i][j];
												//cout << B[i][j];
								}
								//cout << endl;
				}

}

double operator *(const vector<double> a, const vector<double> b)
{
				double temp = 0;
				int i;
				for (i = 0; i < a.size(); i++)
				{
								temp += a[i] * b[i];
				}
				return temp;
}

void Matrix::Caculate()
{
				int ans_column = A.size();
				int ans_roll = B[0].size();
				vector<double> tempb,tempa;
				tempb.resize(B.size());
				tempa.resize(A[0].size());

				if (B.size() != A[0].size())
								cout << "Matrix multiplication failed." << endl;
				else
				{
								ANS.resize(ans_column);//set ans size
								for (int j = 0; j < ans_column; j++)
								{
												ANS[j].resize(ans_roll);
								}

								for (int y = 0; y < ans_column; y++)
								{
												for (int i = 0; i < A[0].size(); i++)
																tempa[i] = A[y][i];
												for (int x = 0; x < ans_roll; x++)
												{
																for (int i = 0; i < B.size(); i++)
																				tempb[i] = B[i][x];
																ANS[y][x] = tempa * tempb;
																cout << ANS[y][x];
																if (x != ans_roll - 1)
																				cout << " ";
																else
																				cout << endl;
												}
												
								}
				}
}
void Matrix::clear()
{
				A.clear();
				B.clear();
				ANS.clear();
}
