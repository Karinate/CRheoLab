#include "Face.h"

Face::Face(int nPointsInFace, vector<Point*> facePoints, int owner=-1, int  neighbour=-1 )
:   nPointsInFace_(nPointsInFace),
    facePoints_(facePoints), 
    owner_(owner), 
    neighbour_(neighbour)
{


}

Face::Face( )
{


}

void Face::setNeighbour(int neighbour)
{
    neighbour_ = neighbour;
}

void Face::setOwner(int owner)
{
    owner_ = owner;
}



