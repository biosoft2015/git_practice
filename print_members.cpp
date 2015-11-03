#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
	vector<string> members;

	//Add Your Name Here
	members.push_back("Zachary Gittelman");
	members.push_back("Ali Turfah");
	members.push_back("Hy Doan");


	//Print All Members
	for (int i = 0; i < members.size(); ++i)
	{	
		cout << members[i] << endl;
	}

}