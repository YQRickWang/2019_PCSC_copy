#include <iostream>
#include "ComplexNumber.hpp"

ComplexNumber** Create_Matrix(int d1, int d2);
void Delete_Matrix(ComplexNumber** A,int d1);
void Matrix_Multiply(ComplexNumber** A, ComplexNumber**B);
void Matrix_Add(ComplexNumber**A, ComplexNumber**B);
void Matix_Subtract(ComplexNumber**A,int n);

int main() {
    ComplexNumber** A;
    ComplexNumber** exp_A;
    ComplexNumber** power_A;
    int N = 100;
    double real_temp = 0.0;
    double imag_temp = 0.0;


    A = Create_Matrix(3,3);
    exp_A = Create_Matrix(3,3);
    power_A = Create_Matrix(3,3);
    //input
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            std::cin>>real_temp>>imag_temp;
            ComplexNumber z(real_temp,imag_temp);
            A[i][j] = z;
        }
    }

    //compute exponential
    for(int i = 0;i<N;i++)
    {
        //compute each and add them up

    }

    //output
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cout<<A[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    Delete_Matrix(A,3);
    Delete_Matrix(exp_A,3);
    Delete_Matrix(power_A,3);

}

//the function to allocate a matrix A
ComplexNumber** Create_Matrix(int d1, int d2)
{
    ComplexNumber** A;

    A = new ComplexNumber* [d1];

    for(int i=0; i<d1; i++)
    {
        A[i] = new ComplexNumber[d2];
    }

    return A;
}

//delete matrix
void Delete_Matrix(ComplexNumber** A,int d1)
{
    for(int i=0;i<d1;i++)
    {
        delete[] A[i];
    }

    delete[] A;
}
