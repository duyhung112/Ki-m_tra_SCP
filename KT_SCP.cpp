#include <iostream>
#include <stdilib.h>
#include <time.h>
using namespace std;
#define MAX 100
void Taomang_NgauNhien(int A[], int &n){
  cout <<"\nNhap so luong phan tu cua mang: );
  cin >> n;
  srand(time(NULL);
  for(int i = 1; i <= n; i++){
      A[i] = rand() % MAX -20;
  }
}    
        
void XuatMang(int A[], int n){
  cout   <<"\nMang vua tao : ";
  for(int  i = 1; i <= n; i++){
    cout  <<"Phan tu thu " << i << "la": << A[i]  << "\n";
  }
}
        
bool KT_SCP(int n){
  int i = 0;
  while(i*i <= n){
        if(i*i == n){
            return true;
        }
        ++i;
    }
    return false;
}
        
void XuatSoChinhPhuong(int A[], int n){
  cout  <<"\nCac so chinh phuong co trong mang la: ");
  for(int i = 1; i <= n; i++){
    if(KT_SCP(A[i]) ==  true){
      cout  << A[i];
    }
  }
}
        
int main(){
  int A[MAX];
  int n;
  Taomang_NgauNhien(A,n);
  XuatMang(A, n);
  XuatSoChinhPhuong(A,n);
  system("pause");
  return 0;
}
  
