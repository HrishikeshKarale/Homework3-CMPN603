
#include <iostream>

using namespace std;

int main()
{

	int i, j;
	int list1_size, list2_size;	// size of counter and 2 respectively
	int counter=0;	//counter to store no of occurrences

	cout<<"List 1 size: ";
	cin>> list1_size;

	int list1[list1_size];	//integer array of size list1_size created

	cout<<endl<<"List 1 data: ";

	for (i=0;i<list1_size;i++)	//accepts elements of list1
		cin>>list1[i];

	cout<<endl<<"List 2 size: ";
	cin>> list2_size;

	int array_2[list2_size];	//integer array of size list2_size is created

	cout<<endl<<"List 2 data: ";

	for (i=0;i<list2_size;i++)	//accepts elements of list1
		cin>>array_2[i];

	for (i=0;i<list1_size;i++)
		for(j=0;j<list2_size;j++)
			if (list1[i]==array_2[j])
				counter++;	//increment counter if element in list1 is same as element in list2

	if (counter==list1_size)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";

	return 0;

}
