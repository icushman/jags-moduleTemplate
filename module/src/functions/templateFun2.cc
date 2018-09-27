#include <config.h>
#include "templateFun2.h"
#include <util/nainf.h> // provides na and inf functions

#include <cmath> // basic math operations

#include <util/dim.h>
#include <util/logical.h>

using std::vector;
using std::string;

#define vector1 (args[0])           // define first argument (vector)
#define vector2 (args[1])           // define second argument (vector)
#define scalar (*args[2])           // define third argument (scalar)

namespace jags {
namespace example {

    templateFun2::templateFun2() :ScalarVectorFunction ("fun2", 3) // JAGS function name with 3 arguments
    {}

    double templateFun2::scalarEval (vector <double const *> const &args,
                                     vector<unsigned int> const &lengths) const
    {
        // perform calculations with parameters and return value

        // example:
        double value;
        for (unsigned int i = 0; i < lengths[0]; i++) {
            value += vector1[i];
        }

        return value;
    }

    bool templateFun2::checkParameterLength (vector<unsigned int> const &lengths) const
    {
        // check the length of the parameters

        // example:
        return lengths[0] >= 2;
    }

    bool templateFun2::isDiscreteValued(vector<bool> const &mask) const
    {
        return allTrue(mask);
    }
}}
