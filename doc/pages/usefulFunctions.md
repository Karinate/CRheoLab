@page usefullFunctions Useful Functions
@tableofcontents

----


This page is dedicated to the useful Functions for the volSacalarField

### General Information (Miguel)

The useful functions created for the volField Class aim at providing a set of utilities to manipulate objects of the class and/or create new objects based on previously created objects of the class.

----
### Tensor Invariants (Miguel v3)
The volField class can comprise fields of type tensor and symmetric tensor. For these the 3 invariants invariants can be calculated.

For **tensors**
\f[
\mathbf{T}=\begin{bmatrix}
T_{11} & T_{12} & T_{13} \\ 
T_{21} & T_{22} & T_{23}\\ 
T_{31} & T_{32} & T_{33}
\end{bmatrix}
\f]

The invariants are the following:
\f[
I_{1}=T_{11}+T_{22}+T_{33}
\f]
\f[
I_{2}=T_{11}T_{22}+T_{11}T_{33}+T_{22}T_{33}-T_{12}T_{21}-T_{23}T_{32}-T_{13}T_{31}
\f]
\f[
I_{3}=-T_{13}T_{22}T_{31}+T_{12}T_{23}T_{31}+T_{13}T_{21}T_{32}-T_{11}T_{23}T_{32}-T_{12}T_{21}T_{33}+T_{11}T_{22}T_{33}
\f]

For **symmetric tensors**
\f[
\mathbf{T}=\begin{bmatrix}
T_{11} & T_{12} & T_{13} \\ 
T_{12} & T_{22} & T_{23}\\ 
T_{13} & T_{23} & T_{33}
\end{bmatrix}
\f]

The invariants are the following:
\f[
I_{1}=T_{11}+T_{22}+T_{33}
\f]
\f[
I_{2}=T_{11}*T_{22}+T_{11}T_{33}+T_{22}T_{33}-T_{12}^2-T_{23}^2-T_{13}^2
\f]
\f[
I_{3}=-T_{13}^2 T_{22}+T_{12}T_{23}T_{31}+T_{13}T_{12}T_{23}-T_{11}T_{23}^2-T_{12}^2 T_{33}+T_{11}T_{22}T_{33}
\f]

----
### Max and Min from a Field (Miguel)
For operations like shift field, the shift can be performed with the maximum or minimum value of the field

The calculation of the minimum or maximum value of the field depends on the type of field:

* **Scalar fields**: are the maximum of minimum of the field
* **Vector fields**: are the maximum of minimum of the vector magnitude
* **Tensor and Symmetric Tensor fields**: are the maximum of minimum of the second invariant of the tensor


----
### Shift Field (Paulo)
line1

line2

line3

Shift the field with a constant (scalar, vector, symTensor and tensor)
The constant is the
minimum value
maximum value


----
### Scale Field (Paulo)
line1

line2

line3

Scale the field with a constant scalar (same documentation as Shift)


----
### Vector Field related (Karinate)
line1

line2

line3

Project the vectors in one direction
Create a scalarField with the magnitude of the vector


----
### Tensor Field related (Mohamed)
1- Create a vector field with component of the tensor in one direction

The component of the tensor in one direction is obtained by multiplying the transpose of the tensor by the unity vector in that direction. As for example for the direction of x, the mathematical operation takes the following form as shown in Eq(1): 


\begin{equation}
\begin{pmatrix}
\sigma _{xx} & \sigma _{xy} & \sigma _{xz}\\ 
\newline
\sigma _{yx}& \sigma _{yy} &\sigma _{yz} \\ 
\newline
\sigma _{zx}& \sigma _{zy} & \sigma _{zz}\ 
\end{pmatrix}^{t}\begin{pmatrix}
1\\ 
\newline
0\\ 
\newline
0
\end{pmatrix}
\end{equation}

That could be achieved in the CrheoLab using the function projectTensorField, where a general vector direction is avaiable.


2- Create a scalarField with the Tensor Invariants (I1, I2 and I3)

The first tensor invariant (I1) is calculated as the trace of the tensor (T) i.e. the summation of the main diagonal. The second tensor invariant (I2) is calculated as half the extraction of the square of the tensor’s trace and the trace of the square of the tensor. The third tensor invariant (I3) is calculated as the determine of the tensor. The mathematical description is as shown in Eqs(2)-(4) for I1, I2, and I3 respectively:

\begin{equation}
I1 =  tr\left [ T \right ] = \sigma _{xx} +\sigma _{yy} +\sigma _{zz}
\end{equation}

\begin{equation}
I2 = \frac{1}{2} {\left [ \left [ \sigma _{xx} +\sigma _{yy} +\sigma _{zz}  \right ]^{2} -tr\left [ T .T \right ]\right ]= \sigma _{xx}\sigma _{yy}+\sigma _{yy}\sigma _{zz}+\sigma _{xx}\sigma _{zz}-\sigma _{xy}\sigma _{yx}-\sigma _{yz}\sigma _{zy}-\sigma _{xz}\sigma _{zx}}
\end{equation}

\begin{equation}
I3 = \left | T \right | =\sigma _{xx} \left [\sigma _{yy}\sigma _{zz}-\sigma _{yz}\sigma _{zy}  \right ] - \sigma _{xy} \left [ \sigma _{yx}\sigma _{zz}-\sigma _{yz}\sigma _{zx} \right ]+\sigma _{xz}\left [ \sigma _{yx}\sigma _{zy}-\sigma _{yy}\sigma _{zx} \right ]
\end{equation}

In the CrheoLab, they are calculated using the functions I1, I2, and I3 respectively.

----
