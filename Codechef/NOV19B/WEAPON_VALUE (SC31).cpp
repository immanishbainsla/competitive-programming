//WEAPON VALUE (SC31)  CODECHEF NOVEMBER

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count, i, j, k, T;
	long N;
	char s1[11], s2[11];
	
	cin>>T;
	for(i=0; i<T; i++){
	    cin>>N;
	    cin>>s1;
	    count=0;
	    for(j=1;j<N;j++){
	        cin>>s2;
	        for(k=0;k<10;k++){
	            if(s1[k]==s2[k]){
	                s1[k]='0';
	            }
	            else{
	                s1[k]='1';
	            }
	        }
	    }
	    for(k=0; k<10; k++){
	        if(s1[k]=='1'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}


