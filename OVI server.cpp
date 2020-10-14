#include <iostream>
#include <fstream>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
using namespace std;
int get_file_size();
void infinity();
void one();
struct info {
	char ID[10];
	int command;
};
int set_file_size = get_file_size();
void two(info suck);
char ID1[10];
void check() {
	info news;
	ifstream file("server", ios::binary );
	file.read((char*)&news, sizeof(info));
	file.close();
	strcpy(ID1, news.ID);
	cout <<"Login=" << ID1;
	switch (news.command)
	{
	case 11: {
		one(); }
	case 2:
		two(news);
	}
}

void one()
{

	ofstream lol;
	lol.open(ID1, ios::binary| ios::app);
	lol << "I fuck you";
	lol.close();
	infinity();
}
void two(info suck)
{
	ofstream lol;
	lol.open(ID1, ios::binary);
	lol << "Your command-"<< suck.command << " very good";
	lol.close();
	infinity();
}
int get_file_size() {
	ifstream file("server", ios::ate | ios::binary);
	int size = file.tellg();
	file.close();
	if (size == -1) return 0;
	return size;
}
void infinity() {
	set_file_size = get_file_size();
	while (set_file_size == get_file_size()) {
	}
	
	cout << "1";
	cout << endl;
	check();
}
int main()
{
	
	infinity();
}
