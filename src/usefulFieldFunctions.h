////////////////////////////////////////
// volField usefull functions add fields
////////////////////////////////////////

// sum two volFields
template <typename T>
inline volField<T> operator+(const volField<T> & vf1, const volField<T> & vf2)
{    
    volField<T> result(vf1.internalField.size());
    
    result.internalField = vf1.internalField + vf2.internalField;
    
    if (boundaryField_[i].valImposed) {
        for(unsigned int i = 0 ; i < mesh_.nPatches_; i++){
            result.boundaryField_[i] = vf1.boundaryField_[i].fieldValue + vf2.boundaryField_[i].fieldValue        
        }  
    }

    return result;
}

// subtraction of two volFields
template <typename T>
inline volField<T> operator-(const volField<T> & vf1, const volField<T> & vf2)
{    
    volField<T> result(vf1.internalField.size());
    
    result.internalField = vf1.internalField - vf2.internalField;
    
    if (boundaryField_[i].valImposed) {
        for(unsigned int i = 0 ; i < mesh_.nPatches_; i++){
            result.boundaryField_[i] = vf1.boundaryField_[i].fieldValue - vf2.boundaryField_[i].fieldValue        
        }    
    }
    return result;
}

// To compute the magnitude of a vectorField

inline double magVector(const vector3& v1){
    
    for(unsigned int i= 1; i < v1.size(); i++){
        double result= std::sqrt(
                        v1[i][0]*v1[i][0]
                         +v1[i][1]*v1[i][1]
                         +v1[i][2]*v1[i][2]);
        return result;
    }
}

//to compute scalarField to store the magnitude of the vectorField

template < typename T>
scalarField volField<T>::magVector()
{
    vector3 v1;
    volField<scalarField> result;
    if (typeid(internalField).hash_code()==typeid(v1).hash_code() {
     string magFieldFname="magof"+fieldName_;
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

        
#endif
