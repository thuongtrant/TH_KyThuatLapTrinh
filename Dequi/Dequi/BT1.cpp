//#include <iostream>
//using namespace std;
//
////𝑆1 = 1 + 2 + 3 + ⋯ + 𝑛 (n là số nguyên dương)
//int tong(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	return n + tong(n - 1);
//}
////𝑆2 = 1^2 +2^2 + 3^2 + 4^2 ... + n^2 (n là số nguyên dương)
//int cong(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return  n*n + cong(n - 1);
//}
// //s3 = 1 + 1/3 + 1/5 + 1/7 ... + 1/n (n là số nguyên dương và là số lẻ)
//float s3 (float n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return 1 / n + s3(n - 2);
//}
//
//int giaithua(int a)
//{
//	if (a == 1)
//		return 1;
//	else
//		return a * giaithua(a - 1);
//}
////𝑆4 = 1! + 2! + 3! + ⋯ + 𝑛! (n là số nguyên dương)
//int S4(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return giaithua(n) + S4(n - 1);
//}
//int main()
//{
//	int n;
//	cin >> n; 
//		cout << tong(n);
//		cout << cong(n);
//		cout << s3(n);
//		cout << S4(n);
//
//}