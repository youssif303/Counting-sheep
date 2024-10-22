#include<iostream>
using namespace std;
#include <vector>


//function that counts the number of sheep present in the array
int count_sheep(vector<bool> arr)
{ 
	int result=0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == true)
			result++;
	}
	return result;  
	                    //return std::count(arr.cbegin(), arr.cend(), true);
}

int main()
{
	cout <<"Number of sheeps: "<< count_sheep({false, true, true,false,true,true});
	return 0;
}