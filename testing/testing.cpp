#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
int nthRoot(int A, int N) 
{ 
    
    double xPre = rand() % 10; 
    double eps = 1e-3; 
    double delX = INT_MAX; 
    double xK;
    while (delX > eps){ 
        xK = ((N - 1.0) * xPre + 
              (double)A/pow(xPre, N-1)) / (double)N; 
        delX = abs(xK - xPre); 
        xPre = xK; 
    } 
    return int(xK); 
} 


void func(){
	int a[]={1,2,3,3,3};
	deba(a);
}

//----------------------------------------------------------------------//
int main(){

	// deb(x);
	int a = 1000000000 - 999950884;
	a+= (1000000000-1);
	a+= (1000000000- sqrt(999950884));
	deb(a);
// fastIO
// #ifndef ONLINE_JUDGE
// 	freopen("/home/ashish/CPP/testing/inp.txt","r",stdin);
//    	freopen("/home/ashish/CPP/testing/out.txt","w",stdout);
// #endif

// 	int t=1;
// 	cin>>t;
// 	while(t--){
// 		func();
// 	}
}