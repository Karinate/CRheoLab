@page UseFul Functions
@tableofcontents
 
----
 
This page is dedicated to mathematical operations on vectors, scalars, symtensors and tensor variables for the internal and boundary fields.

### We need to compute the projection of a vectorField to determine the component of a vector in a given direction.

Project a VectorField  

The documentation for calculating the vector projection is adapted from \cite  Greenshields (2015). OpenFoam Programmers Guide.

A Scalar is any property that can be represented by a single real number or a one-component quantity that is invariant under rotations of the coordinate system i.e. mass m, volume V.

A vector is a quantity (entity) that has both magnitude and direction i.e. velocity, acceleration.

To project a vectorField, we must first perform 2 algebraic operations;scalar multiplication and vector multiplication (inner product)	

 Scalar multiplication of the 3-Dimensional vector \f$ \vec{V}= \ {V}_x\hat{i}\ + \ {V}_y\hat{j}\ + {V}_z\hat{k}\f$ by scalar \f$ S \f$ 

*    \f$ \ {S}{V}= \ {S}{V}_x\hat{i}\ + \ {S}{V}_y\hat{j}\ + {S}{V}_z\hat{k} \f$ 
	
Scalar multiplication is commutative (order independent) and is performed by multiplying (scaling) all the vector components by the scalar to obtain a vector product. 


 Vector (Inner product) multiplication of two vectors \f$ \vec{V} and \:\vec{U} \f$  

*     \f$ \vec{V}= \ {V}_x\hat{i}\ + \ {V}_y\hat{j}\ + {V}_z\hat{k} \f$ 

*     \f$ \vec{U}= \ {U}_x\hat{i}\ + \ {U}_y\hat{j}\ + {U}_z\hat{k} \f$ 


*     \f$ \vec{V}\cdot\vec{U}= \ {V}_x{U}_x + \ {V}_y{U}_y + \ {V}_z{U}_z \f$ 

The dot product of two vectors is non-commutative (order dependent) and produces a scalar.

----

### We  need to compute the magnitude of a vectorField

To compute the magnitude of a vector 

The documentation for calculating the vector magnitude is adapted from \cite  Gradshteyn and Ryzhik (2000). Tables of Integrals, Series and Products.

To calculate the magnitude of a vectorField, we have to perform two algebraic operations; magnitude squared of a 3-Dimensional vector and magnitude (square root of the magnitude squared)

Magnitude squared of a 3-Dimensional vector \f$ \vec{V} \f$ is the inner product of the vector with itself;

*     \f$ \vec{V}= \ {V}_x\hat{i}\ + \ {V}_y\hat{j}\ + {V}_z\hat{k} \f$

*     \f$ |V|^2 = \ {V}:{V} = \ {V}_x{V}_x + \ {V}_y{V}_y + \ {V}_z{V}_z \f$ 


Magnitude for the vector, which is the square root of the magnitude squared \f$ |V|^2 \f$ for a vector 

*      \f$ |V| = \sqrt {|V|^2} = \sqrt {V:V} \f$ 


*     \f$ |V| = \sqrt {{V}_x{V}_x + \ {V}_y{V}_y + \ {V}_z{V}_z} \f$ 

----
----
