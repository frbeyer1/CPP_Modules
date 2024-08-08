#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain{

    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain &copy);
        virtual ~Brain();
        Brain &operator=(const Brain &src);

        const   std::string get_idea(size_t i)const;
        const   std::string *idea_address(size_t i) const;
        void    set_idea(size_t i, std::string idea);
};

#endif