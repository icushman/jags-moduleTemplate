#ifndef DBERN_H_ // check whether DBERN_H_ is already defined
#define DBERN_H_
#include <distribution/templateDist1.h> // JAGS scalar distribution base class

namespace jags {
namespace example {

    class templateDist1 : public ScalarDist // scalar distribution class
    {
        public:
            templateDist1(); // Constructor
            double logDensity(double x, PDFType type,
                              std::vector<double const *> const &parameters,
                              double const *lower, double const *upper) const;

            double randomSample(std::vector<double const *> const &parameters,
                                double const *lower, double const *upper,
                                RNG *rng) const;

            double typicalValue(std::vector<double const *> const &parameters,
                                double const *lower, double const *upper) const;

            /** Checks that pi lies in the open interval (0,1) */
            bool checkParameterValue(std::vector<double const *> const & parameters) const;

            /** Bernoulli distribution is discrete valued */
            bool isDiscreteValued(std::vector<bool> const &mask) const;
    };

}
}

#endif /* DBERN_H_ */
