#include <config.h>
#include "templateFun3.h" // class header file
#include <util/nainf.h> // provides na and inf functions

#include <cmath> // basic math operations

#include <util/dim.h>
#include <util/logical.h>

using std::vector; // vector is used in the code
using std::string; // string is used in the code

#define vector1 (args[0])           // define first argument (vector)
#define vector2 (args[1])           // define second argument (vector)
#define scalar1 (*args[2])          // define third argument (scalar)
#define scalar2 (*args[3])          // define third argument (scalar)

namespace jags {
namespace example {

    templateFun3::templateFun3() :VectorFunction ("fun3", 4) // JAGS function name with 4 arguments
    {}

    void templateFun3::evaluate (double *value, vector <double const *> const &args,
                                 vector<unsigned int> const &lengths) const
    {
        // perform calculations with parameters and return value

        // example:
        for (unsigned int i = 0; i < lengths[0]; i++) {
            value[i] = vector1[i];
        }

        // values stored in "value" are returned in JAGS
    }

    unsigned int templateFun3::length (vector<unsigned int> const &parlengths,
                                vector<double const *> const &parvalues) const
    {
        // return length of the returned vector

        // example:
        return parlengths[0]; // returns length of the first parameters
        // or for example:
        // return 2;
    }

    bool templateFun3::isDiscreteValued(vector<bool> const &mask) const
    {
        return allTrue(mask);
    }
}}
