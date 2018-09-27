#include <config.h>
#include "templateFun1.h"
#include <util/nainf.h>

#include <cmath>

using std::vector;
using std::string;

#define x (*args[0])        // define first argument
#define prob (*args[1])     // define second argument

namespace jags {
namespace example {

    templateFun1::templateFun1() :ScalarFunction("fun1", 2) // JAGS function name with 2 arguments
    {}

    bool templateFun1::checkParameterValue(vector<double const *> const &args) const
    {
        // check whether the parameter values are valid.
        // return TRUE if valid, FALSE if not

        // example:
        return(prob >= 0.0 && prob <= 1.0);
    }

    double templateFun1::evaluate(vector<double const *> const &args) const
    {
        // perform calculations with parameters and return value

        // example:
        if (prob >= 0.5)
            return 1;
        else
            return 0;
    }
}
}
