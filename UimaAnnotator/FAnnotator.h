#include "uima/api.hpp"

using namespace uima;

class FAnnotator : public uima::Annotator {
private:
    uima::AnnotatorContext *context;
    uima::Type inputType;
    uima::Feature precision;
    uima::Feature recall;
    uima::Type outputType;
    uima::Feature fMeasure;
    int F_param;

public:
    FAnnotator() = default;

    uima::TyErrorId destroy() override {
        return (uima::TyErrorId)UIMA_ERR_NONE;
    }
    uima::TyErrorId initialize(uima::AnnotatorContext &rclAnnotatorContext) override;
    uima::TyErrorId typeSystemInit(uima::TypeSystem const & crTypeSystem) override;

    uima::TyErrorId process(uima::CAS & rCas, uima::ResultSpecification const & crResultSpecification) override;

};

MAKE_AE(FAnnotator);

