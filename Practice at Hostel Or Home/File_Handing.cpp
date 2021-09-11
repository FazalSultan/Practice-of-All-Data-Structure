#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
	ofstream f1;
	string line=("I Am The King of my world");
	string line2=("i am Khan");
	f1.open("simple.txt");
	f1<<(line)<<endl;
	f1<<line2<<endl;
	f1.close();
	
	ifstream fin;
	fin.open("simple.txt");
	while(fin)
	{
		getline(fin,line);
		cout<<line<<endl;
	}
	fin.close();
	return 0;
}
