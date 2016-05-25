
#include "uima/api.hpp"

using namespace std;



int main() {
    (void) uima::ResourceManager::createInstance("test");

    uima::TyErrorId utErrorId;          // Variable to store return codes
    uima::ErrorInfo errorInfo;
    double precision, recall;

    string descriptor = "FAnnotator.xml";

    uima::AnalysisEngine * pEngine = uima::Framework::createAnalysisEngine(descriptor.c_str(), errorInfo);
    std::cout << errorInfo << "\n";
    std::cout <<"Input Precision: ";
    std::cin >> precision;
    std::cout << "Input recall: ";
    std::cin >> recall;
    std::cout << "\n";
    uima::CAS *aCas = pEngine->newCAS();
    uima::FeatureStructure fs = aCas->createFS(aCas->getTypeSystem().getType("org.PrecisionRecallPair"));
    uima::Feature prec = aCas->getTypeSystem().getFeatureByFullName("org.PrecisionRecallPair:Precision");
    uima::Feature rec = aCas->getTypeSystem().getFeatureByFullName("org.PrecisionRecallPair:Recall");
    fs.setDoubleValue(prec,precision);
    fs.setDoubleValue(rec,recall);
    aCas->getIndexRepository().addFS(fs);
    pEngine->process(*aCas);
    uima::ANIndex anIdx = aCas->getAnnotationIndex(aCas->getTypeSystem().getType("org.FMeasure"));
    uima::ANIterator itr = anIdx.iterator();
    uima::Type fMeasureType  = aCas->getTypeSystem().getType("org.FMeasure");
    uima::Feature fMeasure = fMeasureType.getFeatureByBaseName("Value");
    std::cout << "F-measure = " <<  itr.get().getDoubleValue(fMeasure) << "\n";
    return 0;
}
