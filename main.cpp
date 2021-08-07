#include"MatrixMultiplication.h"

int main()
{
				int a, b;
				Matrix M;
				while (cin >> a >> b)
				{
								M.SetsizeA(a,b);
								cin >> a >> b;
								M.SetsizeB(a,b);
								M.SetmatrixA();
								M.SetmatrixB();
								M.Caculate();
								M.clear();
				}
}
