#include <iostream>		// cout etc.
#include <ctime>  		// needed for time(0) seed
#include <cstdlib>		// needed for srand() and rand()

using namespace std;

void SelectionSort(int *inp_array) {
	cout << "Begining Selection Sort...\n";

	int min, swap, swap_index; // instanciating used variables
	
	for (int x = 0 ; x < sizeof(inp_array) ; x++ ) {
		min = inp_array[x];  // setting the current minimum to the subject x value
		swap = inp_array[x]; // storing the current value to be swaped in later 
		swap_index = x;

		for (int y = x + 1 ; y < sizeof(inp_array) ; y++ ) {
			if (inp_array[y] < min) {
				min = inp_array[y];
				swap_index = y;
			}
		}
		
		if (swap_index != x) {
			inp_array[swap_index] = swap; 
			inp_array[x] = min;
		}
	}

	cout << "Sorted Array:\n";
	for (int x = 0 ; x < sizeof(inp_array) ; x++) {
		// print each of the memebers of the rando_array array
		cout << inp_array[x] << " ";
	}
	cout << '\n';
}

int main() {
	srand((unsigned)time(0)); // seeding the random # generator with the current time

	int rando_array [20]; 

	for (int x = 0 ; x < sizeof(rando_array) ; x++) {
		// populate array rando_array with random numbers between 0 and 20
		rando_array[x] = (rand()%100)+1; 
	}

	cout << "Unsorted Array: ";
	for (int x = 0 ; x < sizeof(rando_array) ; x++) {
		// print each of the memebers of the rando_array array
		cout << rando_array[x] << " ";
	}
	cout << '\n';

	SelectionSort(rando_array); 
	/*
		The issue with this basic selection sort is that it can generate
		large arrays without issue but sorting it causes an abort. I need
		to make a more efficient selection sort.
	*/

}
