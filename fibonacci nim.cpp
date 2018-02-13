#include<iostream>
using namespace std;
int main()
{
	int numcoins=0,sum=0,p1=0,p2=0;
	bool firstRound =false;
	cout<<"enter number of coins:";
	cin>>numcoins;
	while(sum<numcoins){
		cout<<"player1:";
		if(firstRound==false){
			cin>>p1;
			sum=sum+p1;
			firstRound=true;
		}
		else
			{cin>>p1;
		sum=sum+p1;
		while(p1>2*p2){
			sum=sum-p1;
		cout<<"error,you should enter number less than or equal"<<p2*2<<":";
		cin>>p1;
		sum=sum+p1;
		}}
		cout<<"sum="<<sum<<endl;
		if(sum==numcoins){
			cout<<"player1 win !"<<endl;
			break;
		}
		cout<<"player2:";
		cin>>p2;
		sum=sum+p2;
		while(p2>2*p1){
			sum=sum-p2;
			cout<<"error,you should enter number less than or equal"<<p1*2<<":";
			cin>>p2;
			sum=sum+p2;
		}
		cout<<"sum="<<sum<<endl;
		if(sum==numcoins){
			cout<<"player2 win!"<<endl;
			break;
		}
	}
	return 0;
}


