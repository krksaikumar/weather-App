#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, queries, k, val, p, q, *ptr;
    
    cin>>n>>queries;
    int **a = new int*[n];
    
    for(int i=0; i<n; i++){    	
    	cin>>k;
    	*(a + i)  = new int[k];    	
    	for(int j=0; j<k; j++){    		
    		cin>>val;
	    	ptr = *(a+i);
	   	*(ptr + j) = val;
    	}    	
    }
    
    while(queries-- && cin>>p>>q )  {   	
    	ptr = *(a+p);
    	cout<< *(ptr + q) <<endl;   	
    }
    for(int i=0; i<n; i++)
    	delete[] a[i];
    delete[] a;
    return 0;
}
/*
//EDITORIAL
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int n;
    int q;
    cin >> n >> q;
    
    // Create an array of pointers to integer arrays 
    // (i.e., an array of variable-length arrays)
    int** outer = new int*[n];

    // Fill each index of 'outer' with a variable-length array
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        // Create an array of length 'k' at index 'i'
        outer[i] = new int[k];

        // Fill each cell in the 'inner' variable-length array
        for(int j = 0; j < k; j++) {
            cin >> outer[i][j];
        }
    }

    // Perform queries:
    while(q-- > 0) {
        int outer_index;
        int inner_index;
        cin >> outer_index >> inner_index;
        
        // Find the variable-length array located at outer_index
        // and print the value of the element at inner_index.
        cout << outer[outer_index][inner_index] << endl;
    }

    return 0;
}*/
