#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	
int N,I,JB;
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
}
