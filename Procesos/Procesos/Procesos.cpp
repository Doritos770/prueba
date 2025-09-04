#include <iostream>
#include <chrono> 
using namespace std;

int algoritmoA(int A)
{                    
    int x, S;x = 0;
    if (x > A)
    {
        S = A;
    }
    else
    {
        x++;
        S = x;
    }
    return S;
}

// 1   -->  0.0004 ms
// 2   -->  0.0004 ms   
// 3   -->  0.0004 ms 
// 4   -->  0.0004 ms 

//  N  ----------------------->
int algoritmoB(long N)
{
    int x;
    x = 0;
    while(x<N)
    {
        x++;
        x;
    }
    return 0;
}

// 1   -->  0.0003 ms
// 2   -->  0.0004 ms   
// 3   -->  0.0004 ms 
// 10  -->  0.0005 ms 
//10000-->  0.0009 ms

//     ^
//    /
//   /
//  /


void algoritmoC(int N) {
    int S;
    while(0<N) {
        N--;
        S = N;
    }
    while(0<S)
    {
        S--;
        S;
    }
}

// 1    -->  0.0003 ms
// 10   -->  0.0003 ms   
// 100  -->  0.0007 ms 
// 1000 -->  0.0016 ms 
// 10000-->  0.0281 ms

//     ^
//    /
//   /
//  /

void algoritmoD(int N)
{
    int X=0;
    for (int i = 0; i < N; i++)
    {
        if (X < N)
            X = N;
        else
        {
            while (0 < X)
            {
                X--;
            }
        }
    }
}

// 1    -->  0.0003 ms
// 10   -->  0.0007 ms   
// 100  -->  0.0138 ms 
// 1000 -->  0.3545 ms 
// 10000--> 47.1064 ms

//     ^
//    /
//   /
//  /

void algoritmoE(int N) {
    int i = 0;
    int J;
        while (i<N)
        {
            J = 0;
            i +=1;
            while (J<i)
            {
                J++;
            }
        }
}

// 1    -->  0.0003 ms
// 10   -->  0.0007 ms   
// 100  -->  0.0053 ms 
// 1000 -->  0.2592 ms 
// 10000--> 49.5901 ms

//     ^
//    /
//   /
//  /



//-----------------------------------------------------------//


//defensa





double_t factorialrec(double_t N) {

    if (0 < N)
    {
        return factorialrec(N - 1) * N;
    }
    else
    {
        return 1;
    }
}

void factorial(int N) {
    while (0 <= N)
    {
        auto inicio = chrono::high_resolution_clock::now();

        factorialrec(N);

        auto fin = chrono::high_resolution_clock::now();

        chrono::duration<double, milli> duracion = fin - inicio;

        

        cout << N << "   " << "-->" << duracion.count() << " ms" << endl;
        N--;
    }
    
}

void factorial2(int N) {

    if (0 >= N)
    {
    
    }
    else
    {
        auto inicio = chrono::high_resolution_clock::now();

        factorialrec(N);

        auto fin = chrono::high_resolution_clock::now();

        chrono::duration<double, milli> duracion = fin - inicio;

        cout << N << "   " << "-->" << duracion.count() << " ms" << endl;
        factorial2(N - 1);
    }

}
// 1  --> 0.0003 ms
// 2  --> 0.0003 ms
// 3  --> 0.0003 ms   
// 4  --> 0.0003 ms 
// 5  --> 0.0005 ms 
// 6  --> 0.0005 ms
// 7  --> 0.0005 ms   
// 8  --> 0.0005 ms 
// 9  --> 0.0005 ms 
// 10 --> 0.0006 ms


// 30 --> 0.0009 ms
// 
//     ^
//    /
//   /
//  /



int main()
{
    factorial2(10);
}

