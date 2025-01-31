#include<iostream>
using namespace std;
#include<math.h>
#include<typeinfo>
#include "volField.h"
#include "mathOperations.h"
 
//To compute the magnitude of a vectorField
 
inline double magVector(const vectorField& v1){
    
    for (unsigned int i=0; i < v1.size(); i++) {
        double sum = (  pow(v1[i][0],2)
                        +pow(v1[i][1],2)
                        +pow(v1[i][2],2));
        double result= sqrt(sum);
              return result;
    }   
     }
 
// To compute a scalarField to store the magnitude of the vectorField
 
template <typename vectorType>
scalarField volField<vectorType>::magVector()
{
  vector3 v1;
  volField<scalarField> result;
  if (typeid(internalField).hash_code()==typeid(v1).hash_code() {
     string magFieldFname ="magof"+fieldName_;
 
     result.fieldName_=magFieldFname;
     result.runTime_=runTime_;
 
    for(unsigned int i= 0; i < internalField.size(); i++) {
    result.internalField.push_back(mag(internalField[i]));
  }
 
  for(unsigned int i = 0; i < mesh_.nPatches_; i++){
 
    for(unsigned int i = 0; i < mesh_.nPatches_; i++){
       result.boundaryField_[i].type = "fixedValue";
       result.boundaryField_[i].valImposed = true;
       for(unsigned int j = 0; j < result.boundaryField_[i].fieldValue.size(); j++){
          result.boundaryField_[i].fieldValue.push_back (mag(boundaryField_[i].fieldValue[j]));  
      }
    }
  }
}
else
{
 cout:: << "Error: Function volField<vectorType>::magVector called for a non vector Field";
}
return result;
