#include<iostream>
#include<string>

using namespace std;

int main(){
	string text;
	cout<<"Hi! What is your name?"<<endl;
	getline(cin, text);
	cout << "Hello "<< text << "!" << endl;
	return 0;
}
