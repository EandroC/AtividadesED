#include <iostream>

using namespace std;

void torresHanoi(int n,char inicial,char auxiliar,char final){
    
	if(n==1){
		cout<<inicial<<" -> "<<auxiliar<<endl;
		return;
	}
	
    torresHanoi(n-1,inicial,final,auxiliar);

	cout<<inicial<<" -> "<<auxiliar<<endl;
	
	torresHanoi(n-1,final,auxiliar,inicial);
}


int main()
{
    int n;

    cin>>n;

	torresHanoi(n,'A','C','B');

	return 0;
}
