#include<iostream>
using namespace std;
int main(){
	int size1;
	int size2;
	cout<<"Enter the first Array Size: ";
	cin>>size1;
	int array1[size1];
	cout<<"Enter the first Array Elements: "<<endl;
	for(int i=0; i<size1; i++){
		cout<<"Index "<<i<<": ";
		cin>>array1[i];
	}

	cout<<"Enter the Second Array size: ";
	cin>>size2;
	int array2[size2];
	cout<<"Enter the Second Array Elements: "<<endl;
	for(int i=0; i<size2; i++){
		cout<<"Index "<<i<<": ";
		cin>>array2[i];
	}
	int z=size1+size2;
	int array3[z];
	cout<<"The Third Array IS: "<<endl;
	for(int i=0; i<size1; i++){
		cout<<"Index "<<i<<": "<<array1[i]<<endl;
	}
	for(int i=0; i<size2; i++){
		cout<<"Index "<<i+size1<<": "<<array2[i]<<endl;
	}
}