#ifndef __POW_HPP__
#define __POW_HPP__

#include "gtest/gtest.h"

#include "base.hpp"

class POW : public Base()
{

public:
    POW(Base *numBase, Base *exponent) : Base()
    {
        base = numBase;
        expn = exponent;
    }
    virtual double evaluate()
    {
        return base ->evaluate() ** expn->evaluate();
    }
    virtual std::string stringify()
    {
        return base->stringify() ** expn->stringify();
    }

private:
    Base *base;
    Base *expn;
};

#endif //__POW_HPP__
