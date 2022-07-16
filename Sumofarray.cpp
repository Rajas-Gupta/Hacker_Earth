#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    
	int num1[num];
	int i=1;
	long long int sum=0;	
	while(num--){
		int num;
		cin>>num1[i];
		i++;
		sum+=num1[i];
	}
	cout<<sum;
	return 0;
}