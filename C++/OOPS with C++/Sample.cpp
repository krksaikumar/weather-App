#include <iostream.h>
int main(){
    int x =1;
    while(x<100){
    bool	isPrime=true;
//    cout<<"enter a no."<<endl;
 //   cin>>x;
    for(int i=2; i<=x/2; i++){
    	if(!(x%i)){
    	     isPrime = false;
    	     
    	    break;    	    
    	}
    }
    if(isPrime) cout<<x<<" prime"<<endl;
    //else cout<<x<<"not prime"<<endl;
    x++;
    }
	
}