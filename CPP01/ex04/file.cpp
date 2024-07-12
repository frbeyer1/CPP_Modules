#include "file.hpp"

file::file(std::string file) : _infile(file){
    this->_outfile = this->_infile + ".replace";
}

void    file::replace_content(std::string tofind, std::string replace){

        std::ifstream infile(this->_infile);

        if (infile.is_open())
        {
            std::string content;
            if (getline(infile, content, '\0')){
                std::ofstream outfile(this->_outfile);
                size_t pos;
                pos = content.find(tofind);
                while (pos != std::string::npos){
                    content.erase(pos, tofind.length());
                    content.insert(pos, replace);
                    pos = content.find(tofind);
                }
                outfile << content << std::endl;
                outfile.close();
            }
            else
                std::cout << "file empty" << std::endl;
            infile.close();
        }
        else
            std::cerr << "cant open file!" << std::endl;
}
