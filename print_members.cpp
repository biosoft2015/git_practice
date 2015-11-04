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
	members.push_back("Albert Lo");
<<<<<<< HEAD
	members.push_back(ÒJosh AbramsonÓ);
=======
	members.push_back("Santiago Schnell");

>>>>>>> 13d9365ba442e5061f2d939644af8f6e54b4dcec

	//Print All Members
	for (int i = 0; i < members.size(); ++i)
	{	
		cout << members[i] << endl;
	}

}