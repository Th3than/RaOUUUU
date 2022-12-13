#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}
string n1, n2, n3, n4;
int main(){
    cout << "Input text: ";
	cin >> n1;
	n2 = func1(n1);
    cout << "Reversed text: "<< n2;
	n3 = func2(n1);
	n4 = func2(n2);
    cout << "\nPalindrome: ";
	int i = 0, L = n1.size(), count = 0;
	while (i < L)
	{
		if (n3[i] == n4[i])
		{
			count++;
		}
		i++;
	}
	if (count == i)
	{
		cout << "Yes";
	}else{
		cout << "No";
	}
	
	
    return 0;
}
 