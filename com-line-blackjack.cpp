#include<cstdlib>
#include<iostream>
#include<cmath>
#include<vector>
#include<ctime>
using namespace std;
int main(void){
	int x = 52;
	int rank[x];
	int suit[x];
	string rankNames[13];
	string suitNames[4];
	int i = 0;
	int j = 0;
	int r,p,players,cards;
	srand(time(NULL));
	for(i=0; i<x;i++){
		rank[i] = i/4;
	}
	for(i=0; i<x; i++){
		suit[i] = i%4;
	}
	for(i=0; i<x;i++){
		p = rand()% 52;
		r = rank[i];
		rank[i] = rank[p];
		rank[p] = r;
	}
	for(i=0;i<x;i++){
		p = rand() % 52;
		r = suit[i];
		suit[i] = suit[p];
		suit[p] = r;
	}
	do{
	cout<<"How many players? ";
	cin>>players;
	while(players<=0){
		cout<<"must have players: ";
		cin>>players;
	}
	cout<<"How many cards per player? ";
	cin>>cards;
	while(cards<=0){
		cout<<"must have a hand of cards ";
		cin>>cards;
	}
	if(players * cards > 52){
		cout<<"not enough cards in the deck"<<endl;
	}
}while(players * cards > 52);
rankNames[0] = "2";
rankNames[1] = "3";
rankNames[2] = "4";
rankNames[3] = "5";
rankNames[4] = "6";
rankNames[5] = "7";
rankNames[6] = "8";
rankNames[7] = "9";
rankNames[8] = "10";
rankNames[9] = "jack";
rankNames[10] = "queen";
rankNames[11] = "king";
rankNames[12] = "ace";
suitNames[0] = "clubs";
suitNames[1] = "diamonds";
suitNames[2] = "hearts";
suitNames[3] = "spades";
for(i=0;i<players;i++){
	cout<<"player "<<i+1<<"'s hand:"<<endl;
	for(j=0;j<cards;j++){
		cout<<rankNames[rank[j + i * cards]]<<" "<<suitNames[suit[j + i * cards]]<<endl;
	}
}
	system("pause");
	return(0);
}
