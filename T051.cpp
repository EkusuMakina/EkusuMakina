#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main()
{
	char a[5],b[15];
	scanf("%s %s",&a,&b);
		if(!strcmp(a,"A#")) cout<<"Bb "<<b;
	else if(!strcmp(a,"Bb")) cout<<"A# "<<b;
	else if(!strcmp(a,"C#")) cout<<"Db "<<b;
	else if(!strcmp(a,"Db")) cout<<"C# "<<b;
	else if(!strcmp(a,"D#")) cout<<"Eb "<<b;
	else if(!strcmp(a,"Eb")) cout<<"D# "<<b;
	else if(!strcmp(a,"F#")) cout<<"Gb "<<b;
	else if(!strcmp(a,"Gb")) cout<<"F# "<<b;
	else if(!strcmp(a,"G#")) cout<<"Ab "<<b;
	else if(!strcmp(a,"Ab")) cout<<"G# "<<b;
	else cout<<"UNIQUE"<<endl;
	return 0;
}
