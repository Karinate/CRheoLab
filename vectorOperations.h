
// Output vectorField to screen
std::ostream& operator<<(std::ostream& os, const vectorField& v)
{
    os << "[" << std::endl;
    
    for (int i = 0; i < v.size(); ++i) {
        
        os << "\t";

        os << "[ ";

        for (int j=0; j< v[i].size(); j++)
        {
            os<< v[i][j] << " ";
        }
        os << "]" << std::endl;
    }

    os << "]\n";
    return os;
}


// Output vectorField to screen
std::ostream& operator<<(std::ostream& os, const vector3& v)
{
    os << "[ " ;

    for (int i = 0; i < v.size(); ++i) {

        os<< v[i] << " ";
    }

    os << "]" << std::endl;
    return os;
}


// Math Operations

// At the vector level

// Summation
vector3 operator+(const vector3& v1, const vector3& v2)
{
   
   vector3 result;

    result[0] = v1[0] + v2[0];
    result[1] = v1[1] + v2[1];
    result[2] = v1[2] + v2[2];

   return result;
}


// Subtraction
vector3 operator-(const vector3& v1, const vector3& v2)
{
   
   vector3 result;

    result[0] = v1[0] - v2[0];
    result[1] = v1[1] - v2[1];
    result[2] = v1[2] - v2[2];

   return result;
}

// scalar multiplication
vector3 operator*(const double& d1, const vector3& v1)
{
    vector3 result;

    result[0] = d1*v1[0];
    result[1] = d1*v1[1];
    result[2] = d1*v1[2];

   return result;
}

vector3 operator*(const vector3& v1,const double& d1)
{
    vector3 result;

    result = d1*v1;

   return result;
}



// scalar division
vector3 operator/(const vector3& v1, const double& d1)
{
    vector3 result;

    result[0] = v1[0]/d1;
    result[1] = v1[1]/d1;
    result[2] = v1[2]/d1;

   return result;
}

vector3  operator/(const double& d1, const vector3& v1)
{
    vector3 result;

    result[0] = d1/v1[0];
    result[1] = d1/v1[1];
    result[2] = d1/v1[2];

   return result;
}

// outer product
tensor operator*(const vector3& v1, const vector3& v2)
{
 
   tensor result;

    result[0] = v1[0]*v2[0] ;
    result[1] = v1[0]*v2[1] ;
    result[2] = v1[0]*v2[2] ;
    result[3] = v1[1]*v2[0] ;
    result[4] = v1[1]*v2[1] ;
    result[5] = v1[1]*v2[2] ;
    result[6] = v1[2]*v2[0] ;
    result[7] = v1[2]*v2[1] ;
    result[8] = v1[2]*v2[2] ;

   return result;
}



// inner product / dot product
double operator&(const vector3& v1, const vector3& v2)
{  
   double result;

    result = ( 
                  v1[0]*v2[0]
                + v1[1]*v2[1]
                + v1[2]*v2[2]
             );

   return result;
}


// cross product
vector3 operator^(const vector3& v1, const vector3& v2)
{   
   vector3 result;

    result[0] = v1[1]*v2[2] - v1[2]*v2[1];
    result[1] = v1[2]*v2[0] - v1[0]*v2[2];
    result[2] = v1[0]*v2[1] - v1[1]*v2[0];

   return result;
}



// At the field level
vectorField operator*(const vectorField& v1, const double& d1)
{
    vectorField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = v1[i] * d1;
    }

    return result;
}

vectorField operator*( const double& d1, const vectorField& v1)
{

    vectorField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = v1[i] * d1;
    }

    return result;
}

vectorField operator*( const scalarField& s1, const vectorField& v1)
{

    vectorField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = v1[i] * s1[i];
    }

    return result;
}

tensorField operator*(const vectorField& v1, const vectorField& v2)
{

    checkSize(v1,v2);

    tensorField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = v1[i] * v2[i];
    }

    return result;
}


vectorField operator/(const vectorField& v1, const double& d1)
{

    vectorField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = v1[i] / d1;
    }

    return result;
}

vectorField operator/(const double& d1, const vectorField& v1)
{
    vectorField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = d1/v1[i];
    }

    return result;
}

vectorField operator/(const vectorField& v1, const scalarField& s1)
{

    vectorField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = v1[i] / s1[i];
    }

    return result;
}


vectorField operator/(const scalarField& s1, const vectorField& v1)
{
    vectorField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = s1[i]/v1[i];
    }

    return result;
}


scalarField operator&(const vectorField& v1, const vectorField& v2)
{
    scalarField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = v1[i] & v2[i];
    }

    return result;
}

vectorField operator^(const vectorField& v1, const vectorField& v2)
{
    vectorField result(v1.size());

    for(unsigned int i = 0 ; i < v1.size(); i++)
    {
        result[i] = v1[i] ^ v2[i];
    }

    return result;
}

















// Magnitude of a vector
double mag(const vector3& v1)
{


    double result = std::sqrt(
                              v1[0]*v1[0]
                            + v1[1]*v1[1]
                            + v1[2]*v1[2]
                        );
   

   return result;
}


// Magnitude of a vector
scalarField mag(const vectorField& v1)
{
   scalarField result(v1.size());

   for(unsigned int i = 0 ; i < v1.size(); i++)
   {
       result[i] = std::sqrt(
                                  v1[i][0]*v1[i][0]
                                + v1[i][1]*v1[i][1]
                                + v1[i][2]*v1[i][2]
                            );
   }

   return result;
}

// Square of the magnitude of a vector
scalarField magSqr(const vectorField& v1)
{
    scalarField result(v1.size());

    //result = sqr(mag(v1));

   return result;
}

/*
// Square of the magnitude of a vector
vectorField unitVector(const vectorField& v1)
{
    vectorField result(v1.size());

   result = v1/mag(v1);

   return result;
}
*/
