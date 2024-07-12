#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>
# include <vector>
# include <string>

class file{

public:
    file(std::string file);
    void    replace_content(std::string tofind, std::string raplace);
private:
    std::string _infile;
    std::string _outfile;
};

#endif