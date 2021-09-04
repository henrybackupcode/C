#include <iostream> 
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

struct box{
	int numa;
	int numb;
};

bool comp(box& a, box& b) {
	if ( a.numa > b.numa ) {
		return true;
	}

	else if ( a.numa == b.numa ) {
		if (a.numb > b.numb) {
			return true;
		} // if

		else {
			return false;
		} // 
	} 

	return false;
} // comp

vector<box> boxlist;

int main(void) {
	
	int N = 0;
	cin >> N;
	
	for ( int i = 0; i < N; i++ ) {
		box temp;		
		cin >> temp.numa >> temp.numb;
		boxlist.push_back(temp);
	} // for
	
	sort( boxlist.begin(), boxlist.end(), comp );
	
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
	
	for ( int i = 0; i < boxlist.size(); i++ ) {
		cout << boxlist[i].numa << " " << boxlist[i].numb << "\n";
	} // for
} // main()
