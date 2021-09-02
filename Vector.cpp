#include <iostream> 
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> box;

int main(void) {
	
	int N = 0;
	cin >> N;
	
	for ( int i = 0; i < N; i++ ) {
		int temp;
		cin >> temp;
		box.push_back(temp);
	} // for
	
	sort( box.begin(), box.end() );
	
	// box.pop_back()
	// Delete Last member
	
	
	// box.insert()
	// insert member
	
	// box.erase()
	// Delete one or multi member
	
	// box.clear()
	// Delete all member
	
	// box.empty()
	// True -> empty
	
	// box.size()
	// get length
	
	for ( int i = 0; i < N; i++ ) {
		cout << box[i];
	} // for
	
} // main()
