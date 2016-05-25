#include "FAnnotator.h"

uima::TyErrorId FAnnotator::process(uima::CAS &rCas, uima::ResultSpecification const &crResultSpecification) {
    double prec =  rCas.iterator().get().getDoubleValue(precision);
    double rec = rCas.iterator().get().getDoubleValue(recall);
    uima::FeatureStructure fs = rCas.createFS(outputType);
    double F_param = 1;
    double fM = (F_param * F_param + 1) * prec * rec / ((F_param * F_param) * prec + rec);
    fs.setDoubleValue(fMeasure,fM);
    rCas.getIndexRepository().addFS(fs);
    return (uima::TyErrorId)UIMA_ERR_NONE;
}

uima::TyErrorId FAnnotator::initialize(uima::AnnotatorContext &rclAnnotatorContext) {
    context = &rclAnnotatorContext;
    icu::UnicodeString sF_param;
    context->extractValue("Parameter",sF_param);
    std::string fparam;
    sF_param.toUTF8String(fparam);
    F_param = stoi(fparam);
    return (uima::TyErrorId)UIMA_ERR_NONE;

}
uima::TyErrorId FAnnotator::typeSystemInit(uima::TypeSystem const & crTypeSystem){
    inputType  = crTypeSystem.getType("org.PrecisionRecallPair");
    precision = inputType.getFeatureByBaseName("Precision");
    recall = inputType.getFeatureByBaseName("Recall");
    outputType = crTypeSystem.getType("org.FMeasure");
    fMeasure = outputType.getFeatureByBaseName("Value");
    return (uima::TyErrorId)UIMA_ERR_NONE;
}