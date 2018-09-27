#include <module/Module.h>              // include JAGS module base class
#include <distributions/templateDist1.h> // include template of ScalarDist class
#include <functions/templateFun1.h>      // include template of ScalarFunction class
#include <functions/templateFun2.h>      // include template of ScalarVectorFunction class
#include <functions/templateFun3.h>      // include template of VectorFunction class

namespace jags {
namespace example { // start defining the module "example" namespace

    // Module class
    class EXAMPLEModule : public Module {
    public:
        EXAMPLEModule(); // constructor
        ~EXAMPLEModule(); // destructor
    };

    // Constructor function
    EXAMPLEModule::EXAMPLEModule() : Module("example") {
        insert(new templateDist1);
        insert(new templateFun1);
        insert(new templateFun2);
        insert(new templateFun3);
    }

    // Destructor function
    EXAMPLEModule::~EXAMPLEModule() {
        std::vector<Distribution*> const &dvec = distributions();
        for (unsigned int i = 0; i < dvec.size(); ++i) {
            delete dvec[i]; // delete all instantiated distribution objects
        }

        std::vector<Function*> const &fvec = functions();
        for (unsigned int i = 0; i < fvec.size(); ++i) {
            delete fvec[i]; // delete all instantiated function objects
        }
    }

} // end namespace definition
}

jags::example::EXAMPLEModule _example_module;
