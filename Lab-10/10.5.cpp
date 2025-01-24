#include<iostream>
using namespace std;

class Matrix
{
    int mat[2][2];
public:
    Matrix()
    {
        mat[0][0] = 0;
        mat[0][1] = 0;
        mat[1][0] = 0;
        mat[1][1] = 0;
    }
    Matrix(int a,int b,int c,int d)
    {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }
    Matrix operator + (Matrix &mat2)
    {
        Matrix temp;
        temp.mat[0][0] = mat[0][0] + mat2.mat[0][0];
        temp.mat[0][1] = mat[0][1] + mat2.mat[0][1];
        temp.mat[1][0] = mat[1][0] + mat2.mat[1][0];
        temp.mat[1][1] = mat[1][1] + mat2.mat[1][1];
        return temp;
    }
    void display()
    {
        cout<<"["<<mat[0][0]<<" "<<mat[0][1]<<"]"<<endl;
        cout<<"["<<mat[1][0]<<" "<<mat[1][1]<<"]"<<endl;
    }
};
int main()
{
    Matrix c1(1,2,3,4);
    Matrix c2(5,6,7,8);

    cout<<"First Matrix number-"<<endl;
    c1.display();
    cout<<"Second Matrix number-"<<endl;
    c2.display();
    cout<<endl;
    Matrix add = c1 + c2;
    cout<<"Addition-"<<endl;
    add.display();

    return 0;
}

