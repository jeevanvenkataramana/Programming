/*
 * MaxDiffArrayMain.cpp
 *
 *  Created on: Jun 21, 2018
 *      Author: jeevan venkataramana
 */

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int maxDifference(vector <int> a) {

    int maxDiff = a[1] - a[0];
    int min = a[0];
    int i =1;
    while(i<a.size())
    {
       	if(a[i] - min > maxDiff)maxDiff = a[i] - min;
    	if(a[i]<min)min=a[i];
    	i++;
    }

return maxDiff;
}

int main()
{
	vector<int> arr;
	int n;
	cout<<"Enter no of elements:";
	cin>>n;
	cout<<endl<<"Enter elements:"<<endl;
	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	cout<<endl<<" Max Difference :";
	cout<<maxDifference(arr);
	return 0;
}



