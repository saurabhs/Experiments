#include <iostream>
#include <conio.h>
#include <time.h>
#include "constants.h"

using namespace std;

int bubbleSort(int data[SIZE]){
	int count = 0;

	for(int i = 0; i < SIZE; i++)
		for(int j = 0; j < SIZE - 1; j++)
			if(data[j] > data[j + 1]){
				int temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
				count++;
			}

	return count;
}

int quickSort(int data[SIZE], int left, int right){
	int count = 0;
	int i = left, j = right;
	int pivot = data[(left + right ) / 2];

	while(i <= j){
		while(data[i] < pivot)
			i++;
		while(data[j] > pivot)
			j--;
		if(i <= j){
			int temp = data[i];
			data[i] = data[j];
			data[j] = temp;
			i++; j--; 
			count++;
		}
	}

	if(left < j)
		quickSort(data, left, j);
	if(i < right)
		quickSort(data, i, right);

	return count;	
}

int insertionSort(int data[SIZE]){
	int count = 0;

	for(int i = 1; i < SIZE; i++){
		int value = data[i];
		int j = i - 1;
		//if(j == -1) j++;
		bool done = false;
		while(!done){
			if(data[j] > value){
				data[j + 1] = data[j];
				j--;
				if(j < 0) done = true;
				count++;
			}
			else
				done = true;
		}
		data[j + 1] = value;

		/*cout<<"\n\n";
		for(int i = 0; i < SIZE; i++)
			cout<<data[i]<<endl;*/
	}

	return count;
}

int selectionSort(int data[SIZE]){
	int count = 0;

	for(int i = 0; i < SIZE; i++){
		int indexMin = i;
		for(int j = i; j < SIZE; j++)
			if(data[indexMin] > data[j]){
				indexMin = j;
				count++;
			}
		int temp = data[i];
		data[i] = data[indexMin];
		data[indexMin] = temp;
	}

	return count;
}

int merge(int left[], int right[]){
	return 0;
}

int mergeSort(int data[SIZE]){
	int count = 0;
	//int left[], right[], result[];
	//int middle = SIZE / 2;

	//for(int i = 0; i < middle; i++)
	//	left[i] = data[i];
	//for(int i = middle; i < SIZE; i++)
	//	right[i] = data[i];

	//left = mergeSort(left);
	//right = mergeSort(right);
	//data = merge(left, right);

	return count;
}

void performSort(int sort_type, int data[SIZE]){
	int count = 0;
	switch(sort_type){
		case BUBBLE:
			count = bubbleSort(data);
			break;

		case QUICK:
			count = quickSort(data, 0, SIZE - 1);
			break;

		case INSERTION:
			count = insertionSort(data);
			break;

		case SELECTION:
			count = selectionSort(data);
			break;

		case MERGE:
			count = mergeSort(data);
			break;
	}

	cout<<"\n\nArray After Sort:\n\n";
	for(int i = 0; i < SIZE; i++)
		cout<<data[i]<<endl;
	cout<<"\nCount : "<<count;
}

void main(){
	srand(time(NULL));
	int data[SIZE];

	cout<<"Array Before Sort:\n\n";
	for(int i = 0; i < SIZE; i++){
		data[i] = rand() % SIZE;
		//data[i] = SIZE - i;				//worst case, when the array is reversely sorted!
		//data[i] = i;						//best case
		cout<<data[i]<<endl;
	}

	//performSort(BUBBLE, data);
	//performSort(QUICK, data);
	//performSort(INSERTION, data);
	performSort(SELECTION, data);
	//performSort(MERGE, data);

	_getch();
}