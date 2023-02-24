//#include <iostream>
//
//using namespace std;
//
//void nhap (int arr[100][100], int dong, int cot)
//{
//	for (int i = 0; i < dong; i++) {
//	    for (int j = 0; j < cot; j++) 
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//}
//void xuat(int arr[100][100], int dong, int cot)
//{
//	for (int i = 0; i < dong; i++) {
//		for (int j = 0; j < cot; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void tinhTongTungDong(int arr[100][100], int dong, int cot)
//{
//	for (int i = 0; i < dong; i++)
//	{
//		int tong = 0;
//		for (int j = 0; j < cot; j++)
//		{
//			tong += arr[i][j];
//		}
//		cout << "Tong tren dong thu " << i << " la: " << tong << endl;
//	}
//	
//}
//void tinhTongTungCot(int arr[100][100], int dong, int cot)
//{
//	for (int i = 0; i < cot; i++)
//	{
//		int tong = 0;
//		for (int j = 0; j < dong; j++)
//		{
//			tong += arr[j][i];
//		}
//		cout << "Tong tren cot thu " << i << " la: " << tong << endl;
//	}
//
//}
//void xuatPTDuongCheoChinh(int arr[100][100], int dong, int cot)
//{
//
//	for (int i = 0; i < dong; i++)
//	{
//		cout << arr[i][i] << " ";
//	}
//}
//void xuatPTDuongCheoPhu(int arr[100][100], int dong, int cot)
//{
//
//	for (int i = 0; i < cot; i++)
//	{
//		cout << arr[i][cot - i - 1] << " ";
//	}
//}
//void xoadong(int arr[100][100], int &dong, int cot, int xoa)
//{
//	for (int i = xoa; i < dong - 1; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			arr[i][j] = arr[i + 1][j];
//		}
//	}
//	dong=dong -1;
//}
//int kiemtradxungquacheochinh(int arr[100][100], int dong, int cot)
//{
//	for (int i = 0; i < dong; i++)
//	{
//		for (int j = 0; j < dong; j++)
//		{
//			if (arr[i][j] != arr[j][i])
//				return 0;
//		}
//	}return 1;  
//
//}
//int kiemtradxungquacheophu(int arr[100][100], int dong, int cot)
//{
//	for (int i = 0; i < dong; i++)
//	{
//		for (int j = 0; j < dong; j++)
//		{
//			if (arr[i][j] != arr[dong-1-j][dong -1-i])
//				return 0;
//		}
//	}return 1;
//
//}
//int main()
//{
//	
//	int arr[100][100];
//	int dong, cot, xoa;
//	cout << "Nhap so dong: ";
//	cin >> dong;
//	cout << endl;
//	cout << "Nhap so cot: ";
//	cin >> cot;
//	cout << endl;
//	nhap(arr, dong, cot);
//	xuat(arr, dong, cot);
//	
//	//tinhTongTungDong(arr, dong, cot);
//	//cout << endl;
//	//tinhTongTungCot(arr, dong, cot);
//	//cout << endl;
//	//cout << "Cac phan tu tren duong cheo chinh la: ";
//	//xuatPTDuongCheoChinh(arr, dong, cot);
//	//cout << endl;
//	//cout << "Cac phan tu tren duong cheo phu la: ";
//	//xuatPTDuongCheoPhu(arr, dong, cot);
//	//cout << endl;
//	/*cout << "Nhap dong muon xoa";
//	cin >> xoa;
//	xoadong(arr,dong,cot,xoa);
//	xuat(arr, dong, cot);*/
//	//if (kiemtradxungquacheochinh(arr, dong, cot) == 1)
//	//{
//	//	cout << "Ma tran doi xung qua duong cheo chinh";
//
//	//}
//	//else
//	//	cout << "Ma tran khong doi xung qua duong cheo chinh";
//	if (kiemtradxungquacheophu(arr, dong, cot) == 1)
//	{
//		cout << "Ma tran doi xung qua duong cheo phu";
//
//	}
//	else
//		cout << "Ma tran khong doi xung qua duong cheo phu";
//	return 0;
//}
//
//
//
