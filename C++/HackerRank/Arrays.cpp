#include <iostream>
int main() {
    int N; //,i=0;
    std::cin>>N;
    int i =N;
    int *A = new int[N];
   // while(std::cin>>A[i++]);
    while(std::cin>>A[N-(i--)] && i);
    while(std::cout<<A[--N]<<' ' && N);
    delete[] A;
    return 0;
}

/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//while(cin>a);
int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
    	cin>>a[i];
    }
    for(int i=n-1; i>=0; i--){
    	cout<<a[i]<<" ";
    }
    return 0;
}*/
