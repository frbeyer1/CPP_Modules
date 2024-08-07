#include "Brain.hpp"

Brain::Brain(){std::cout<<"Brain Default Constructor"<<std::endl;}

Brain::~Brain(){std::cout<<"Brain Destructor"<<std::endl;};

Brain::Brain(const Brain &copy){
    std::cout<<"Brain Copy Constructor"<<std::endl;
    this == &copy;
}

Brain  &Brain::operator=(const Brain &src){
    if(this == &src)
        return(*this);
    for(int i = 0; i < 100; i++)
    {
        if (src._ideas[i].length() > 0)
            this->_ideas[i].assign(src._ideas[i]);
    }
    return(*this);
}

const std::string   Brain::get_idea(size_t i)const
{
    if(i<100)
        return(this->_ideas[i]);
    else
        return("to much thinking, brain hurts:(");
};
const std::string *Brain::idea_address(size_t i) const{
    if(i<100)
    {
        const std::string &address = this->_ideas[i];
        return(&address);
    }
    else
        return(NULL);
};
void    Brain::set_idea(size_t i, std::string idea){
        if(i<100)
        {
            this->_ideas[i] = idea;
        }
        else
            std::cout<<"to much thinking, brain hurts:("<<std::endl;
};