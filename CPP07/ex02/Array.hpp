#pragma once

template < typename T >
class Array{
    private:
        T           *_array;
        unsigned int size;

    public:

        Array() : _size(0){
            std::cout << "Array[0] Constructor" << std::endl;
            _array = new T[_size];
        }
        Array(unsigend int n) : _size(n){
            std::cout << "Array[" << n << "] Constructor" << std::endl;
            _array = new T[_size];
        }
        Array(Array &copy){
            std::cout << "Array Copy Constructor" << std::endl;
            *this = copy;
        };

        ~Array(){
            std::cout << "Array Destructor" << std::endl;
            if(_array != NULL)
                delete [] _array;
        };

        Array &operator=(const Array &src){
            std::cout << "Array Assignment Operator" << std::endl;
            if(_array != NULL)
                delete[] _array;
            _size = src._size;
            _array = new T[_size];
            for(int i = 0; i < _size; i++)
                _array[i] = src._array[i];
            return *this;
        };

        Array &operator[](unsigned int n)
        {   
            if(n >= _size)
                throw std::exception();
            return _array[i];
        };

        unsigned int size() const
        {
            return(_size);
        };

        class OutOfBounds: public std::exception{
            public:
            virtual const char *e() const throw();
        };
};
