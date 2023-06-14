#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		long long s=0;
		for(int i=0;i<=n;i++){
			s+=(i%k);
		}
		cout << s << endl;
	}
	return 0;
}
