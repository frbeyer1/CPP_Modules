#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>
# include <string>

class File{

public:
    File(std::string File);
    void    replace_content(std::string tofind, std::string raplace);
private:
    std::string _infile;
    std::string _outfile;
};

#endif