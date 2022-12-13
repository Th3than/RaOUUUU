#include<iostream>

using namespace std;
int P[5000];
int funcX(int x){
	int i = 0, P[5000], result = 0;
	while(i < 5000){
		P[i] = 2*i+1;
		if (P[i]%x == 0)
		{
			result = result-P[i];
		}else{
			result = result+P[i];
		}
		
		i++;
	}
	return result;
}
int main(){
	int m = 0;
	while (m < 5000)
	{
		P[m] = 2*m+1;
		m++;
	}
	cout << "Please input k: ";
	int n;
	cin >> n;
	if (n > 0)
	{
		cout <<"Result = "<<funcX(n);
	}else{
		cout << "Invalid input!!!";
	}
	
	
	return 0;
}
