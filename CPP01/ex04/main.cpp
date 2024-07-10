#include "file.hpp"
#include <algorithm>
int main(int ac, char **av)
{
    if(ac == 4)
    {
        ifstream infile(av[1]);
        ofstream outfile;
        string content;
        size_t pos;
        string tofind = av[2];

        if (infile.is_open())
        {
            if (getline(infile, content, '\0')){
                outfile.open(av[1] + string(".replace"));
                pos = content.find(av[2]);
                while (pos != string::npos){
                    content.erase(pos, tofind.length());
                    content.insert(pos, av[3]);
                    pos = content.find(av[2]);
                }
                outfile << content << endl;
                outfile.close();
            }
            else
                cout << "file empty" << endl;
            infile.close();
        }
        else
            cerr << "cant open file!" << endl;
    }
    else
        cerr << "wrong input" << endl;
    return (0);
}
