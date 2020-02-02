#ifndef __rand_HPP__
#define __rand_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op() : Base() { 
            val = rand()% 100;
        }
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return std::to_string(val); }
    private:
        double val;
        
};

#endif //__rand_HPP__
