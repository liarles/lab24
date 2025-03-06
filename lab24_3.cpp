#include<iostream>

using namespace std;

int count(int arr[], int size) {
    set<int> unique_numbers; // ใช้ set เพื่อเก็บค่าที่ไม่ซ้ำกัน

    for (int i = 0; i < size; i++) {
        unique_numbers.insert(arr[i]); // ใส่ค่าลงใน set
    }

    return unique_numbers.size(); // คืนค่าจำนวนสมาชิกที่ไม่ซ้ำกัน
}
int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
