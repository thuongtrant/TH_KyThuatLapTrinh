////Viết hàm đệ qui để xuất ra 1 tam giác Pascal. Biết rằng 1 tam giác Pascal có dạng như sau với chiều cao là 5:
//
//#include <iostream>
//using namespace std;
//int giaithua(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return n * giaithua(n - 1);
//}
//int Tohop(int n, int k)
//{
//	return giaithua(n) / (giaithua(k) * giaithua( n - k ));
//}
//void Pascal(int n)
//{
//	if (n == 0)
//		cout << 1;
//	else
//	{
//		Pascal(n - 1);
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << " " << Tohop(n - 1, i);
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	Pascal(n);
//	cout << endl;
//	return 0;
//}