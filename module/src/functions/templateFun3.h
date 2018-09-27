#ifndef FUN3_FUNC_H_
#define FUN3_FUNC_H_

#include <function/VectorFunction.h>

namespace jags {
namespace example {

    class templateFun3 : public VectorFunction
    {
    public:
        templateFun3();

        void evaluate(double *value, std::vector <double const *> const &args,
                      std::vector <unsigned int> const &lengths) const;

        unsigned int length(std::vector<unsigned int> const &parlengths,
                            std::vector<double const *> const &parvalues) const;

        bool isDiscreteValued(std::vector<bool> const &mask) const;
    };

}}

#endif /* FUN3_FUNC_H_ */
