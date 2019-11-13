HARD SEQUENCE (HRDSEQ)  CODECHEF NOVEMBER

#include<iostream>
using namespace std;
long S[130];
int string_generator(){
    int x, y, i, j;
    S[0]=0;
    S[1]=0;
    for(i=1; i<127; i++){
        x=i;
        j=0;
        y=-1;
        while(j<i){
            if(S[x]==S[j]){
                y=j;
            }
            j++;
        }
        if(y>-1){
            S[i+1]=x-y;
        }
        else{
            S[i+1]=0;
        }
    }
    return 0;
}
int main() {
    int T, N, count;
	// your code goes here
	string_generator();
	cin>>T;
	for(int k=0;k<T;k++){
	    cin>>N;
	    count=0;
	    for(int l=0;l<N; l++){
	        if(S[l]==S[N-1]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    
	}
	
	return 0;
}