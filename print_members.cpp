#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
	vector<string> members;

	//Add Your Name Here
	members.push_back("Daniel Dineeen");
	members.push_back("Zachary Gittelman");
	members.push_back("Ali Turfah");
	members.push_back("Hy Doan");
	members.push_back("Albert Lo");
	members.push_back("Josh Abramson");
	members.push_back("Santiago Schnell");
	members.push_back("Adam Trosin");
	members.push_back("Tommy Oliver");

	//Print All Members
	for (int i = 0; i < members.size(); ++i)
	{	
		cout << members[i] << endl;
	}

}
