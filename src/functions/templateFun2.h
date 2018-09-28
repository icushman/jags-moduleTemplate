#ifndef FUN1_FUNC_H_
#define FUN1_FUNC_H_

#include <function/ScalarVectorFunction.h>

namespace jags {
namespace example {

    class templateFun2 : public ScalarVectorFunction
    {
    public:
        templateFun2();

        double scalarEval(std::vector <double const *> const &args,
                          std::vector <unsigned int> const &lengths) const;

        bool checkParameterLength(std::vector<unsigned int> const &lengths) const;

        bool isDiscreteValued(std::vector<bool> const &mask) const;
    };

}}

#endif /* FUN1_FUNC_H_ */
