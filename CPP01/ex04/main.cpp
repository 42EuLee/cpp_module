#include <fstream>
#include <iostream>

using std::cerr;
using std::string;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::cout;

int main(int argc, char **argv)
{
    ifstream infile(argv[1]); // 1st arg
    string s1(argv[2]); // word to replace
    string s2(argv[3]); // word that is replaced by

    if (argc != 4)
    {
        cerr << "Wrong number of arguments."  << endl;
        return (1);
    }
    if (!infile)
    {
        cerr << "Could not open " << argv[1] << endl;
        return (1);
    }
    ofstream outfile("sedfile");
    string line;
	string latest_line;
    size_t len = s1.length();

    while (getline(infile, line))
    {
        while (true)
        {
            size_t pos = line.find(s1);
	        outfile << line[pos] << endl;
			pos = pos + len;
            // cout << pos << endl;
            if (pos != string::npos)
			{
				cout << s2 << endl;
			}
            else 
                break;
        }
        outfile << line << endl;
    }
}