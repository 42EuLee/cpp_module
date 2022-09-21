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
    if (argc != 4)
    {
        cerr << "Wrong number of arguments."  << endl;
        return (1);
    }
    ifstream infile(argv[1]); // 1st arg
    string s1(argv[2]); // word to replace
    string s2(argv[3]); // word that is replaced by

    if (!infile)
    {
        cerr << "Could not open " << argv[1] << endl;
        return (1);
    }
    string name = argv[1];
    ofstream outfile(name + ".replace");
    if (s1.compare(s2) == 0)
    {
        cerr << "Please input two different strings" << endl;
        return (1);
    }
    
    string line;
    size_t len = s1.length();
    if (len == 0)
    {
        cerr << "Word to replace has 0 length" << endl;
        return (1);
    }
    while (getline(infile, line))
    {
        while (true)
        {
            size_t pos = line.find(s1);
            if (pos != string::npos)
            {
                line.erase(pos, len);
                line.insert(pos, s2);
            }
            else 
                break;
        }
        outfile << line << endl;
    }
}
