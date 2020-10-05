#include<iostream>

using namespace std;

void usage(const string& cmd)	
	{
		string opt[]={
		" -h host      the host name.\n"
		" -v visitor   the visitor name.\n"
		};
		cout << "Usage:" << endl;
		cout << "  " << "welcome" << " -h host -v visitor\n";
		for(int i=0; i<(sizeof(opt))/(sizeof(string)); i++)
		{
			cout << opt[i];
		}
		exit(-1);
	}
void welcome(const string& host, const string& visitor) 
	{
   	cout<<"Hello "<<visitor<<".\n";
	cout<<"This is " << host<<"'s home, Welcome."<<endl;    
	}
int main(int argc, char* argv[]) 
	{
	string host;
	string visitor;
	if (argc != 6)
	{
	usage(argv[0]);
	}
	for(int i=2; i<argc; i=i+2)
	{
		string arg =argv[i];
		if(arg == "-h")
		{
			host = argv[i + 1];		
		}
		else if(arg == "-v")
		{
			visitor = argv[i + 1];
		}
		else
		{
			usage(argv[0]);
		}
	}
	welcome(host, visitor);
	return 0;
}
