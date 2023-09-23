#include<iostream>
#include<bitset>

using namespace std;

int main(){
	short x=-3;
	short y=x<<1;

	cout<<bitset<8*sizeof(x)>(x)<<endl;
	cout<<bitset<8*sizeof(y)>(y)<<endl;

	return 0;
}
