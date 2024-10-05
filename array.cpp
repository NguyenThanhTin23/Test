//Nguyen Thanh Tin - 23110340
#include <bits/stdc++.h>
using namespace std;

class IntArray {
private:
    int *Arr;
    int Size;
public:
    IntArray() {
        this->Arr = nullptr;
        this->Size = 0;
    }
    IntArray(int otherArr[],int s){
  		if(s>0){
		this->Size = s;
		Arr = new int[Size];
		for(int i=0;i<Size;i++)
			this->Arr[i]=otherArr[i];	
			}
	else{
		this->Arr = nullptr;
        this->Size = 0;	
	}
	}
	IntArray(const IntArray& other){
		this->Size=other.Size;
		Arr = new int[Size];
		for(int i=0;i<Size;i++){
			this->Arr[i]=other.Arr[i];
		}
	}
	void Cancel(){
		delete this->Arr;
		this->Size = 0;
	}
    void Input() {
        cout << "Nhap so luong phan tu: ";
        cin >> this->Size;
        Arr = new int[Size];
        for (int i = 0; i < Size; i++)
            cin >> this->Arr[i];
    }

    void Print() {
        for (int i = 0; i < Size; i++)
            cout << this->Arr[i] << " ";
        cout << endl;
    }
    void addElement(int val){
		this->Arr[this->Size] = val;
		this->Size+=1;
		
	}
};
int main(){
	int a[3]={1,2,3};
    IntArray y(a,3);
  	cout<<"Mang la: ";
    y.Print();
    cout<<endl;
    IntArray b = y;
    cout<<"Mang B la: ";
    b.Print();
    cout<<"Mang Y sau khi delete: \n";
    y.Cancel();
    y.Print();
    return 0;
}