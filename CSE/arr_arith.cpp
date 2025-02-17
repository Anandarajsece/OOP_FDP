#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns;
	
	cout << "\nPlease Enter the rows and Columns of a Multi-Dimensional Array =  ";
	cin >> i >> j;
	
	int arr1[i][j], arr2[i][j], add[i][j], sub[i][j], mul[i][j], mod[i][j];
	float div[i][j];
	
	cout << "\nPlease Enter the First Multi-Dimensional Array Items =  ";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> arr1[rows][columns];
		}		
	}	
	cout << "\nPlease Enter the Second Multi-Dimensional Array Items =  ";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> arr2[rows][columns];
		}		
	}
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < j; columns++) {
			add[rows][columns] = arr1[rows][columns] + arr2[rows][columns];
			sub[rows][columns] = arr1[rows][columns] - arr2[rows][columns];
			mul[rows][columns] = arr1[rows][columns] * arr2[rows][columns];
			mod[rows][columns] = arr1[rows][columns] / arr2[rows][columns];
		}
	}
	cout << "\nAdd\t Sub\t Mul\t Div\tMod \n";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < j; columns++) {
			cout << add[rows][columns] << "\t";
			cout << sub[rows][columns] << "\t";
			cout << mul[rows][columns] << "\t";
			cout << mod[rows][columns] << "\t";
			cout << div[rows][columns] << "\t\n";
		}
	}

 	return 0;
}