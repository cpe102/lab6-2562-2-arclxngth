#include<iostream>
using namespace std;

char before(char x){

	int num ,sum;

	num = x;

	if(num>=65 && num<=90){

		if(num == 65){

		return 90;

		}
		else{

		sum = num - 1;

		return sum;
		}
	}
	else{

		return '0';
	}

}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
