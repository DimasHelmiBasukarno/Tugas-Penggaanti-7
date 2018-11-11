#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	
int N,I,JB,RR;
I=0;
JB=0;
cout<<"Masukkan nilai N : ";cin>>N;
do
{
	JB+=I;
	I++;
}
while (I<=N);
cout<<"Jumlah bilangan 1 sampai dengan N :"<<JB<<endl;

cout<<"Nilai Rata-Rata :"<<endl;
do{
RR=JB/N;
cout<<RR<<endl;}
while (RR>=I);
}
