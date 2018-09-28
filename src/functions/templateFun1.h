#ifndef FUN1_FUNC_H_
#define FUN1_FUNC_H_

#include <function/ScalarFunction.h>

namespace jags {
namespace example {

    class templateFun1 : public ScalarFunction
    {
    public:
        templateFun1();

        bool checkParameterValue(std::vector<double const *> const &args) const;

        double evaluate(std::vector<double const *> const &args) const;
    };

}
}

#endif /* FUN1_FUNC_H_ */
