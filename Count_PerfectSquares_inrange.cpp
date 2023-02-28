#include<iostream>
using namespace std;
int main() {
	int range;
	cout << " Enter your maximum range : ";
		cin >> range;
	int *arr=new int[range], k = 0;;
	for (int i = 2; i < range; i++){
		arr[k] = i * i;
		k += 1;
}
	int pc = 0, notpc = 0;
	k = 0;
	for (int i = 0; i < range; i++){
		if (i == arr[k]) {
			pc += 1;
			k += 1;
			continue;
		}
		else {
			cout << "\t" << i;
			notpc += 1;
		}
	}
	cout << "\n Perfect Squares count is : " << pc << endl;
	cout << " NotPerfect Squares count is : " << notpc << endl;
	return 0;
}
