
#include <iostream>
#include <math.h> 
#include <cstring>
#include <string>
#include <limits.h>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm> 
#include <assert.h>
#include <memory>

#include "Mesh.cpp"
#include "findFiles.h"


using namespace std;


int main()
{
      
    checkCaseStructure();
    
    Mesh polyMesh;

    cout << "my directory is " << getExecutablePath() << endl;

    return 0;
}


