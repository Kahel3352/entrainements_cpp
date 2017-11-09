#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> vectQuantite;
	vectQuantite.push_back(6);
	vectQuantite.push_back(12);
	vectQuantite.push_back(24);

	for(int i = 0; i < vectQuantite.size(); i++)
	{
		cout<<vectQuantite[i]<<endl;
	}
	
	return 0;
}
