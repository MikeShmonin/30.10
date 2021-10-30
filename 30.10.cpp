#include <iostream>
#include <math.h>
#include <stack>

using namespace std;

int Triangle(int a1, int a2, int a3)
{
    int S, p=(a1+a2+a3)/2;
    S = sqrt(p*(p-a1)*(p-a2)*(p-a3));
    cout << "S = " << S << endl;
    return S;
}

int Rectangle(int a1, int a2, int a3, int a4)
{
    int S;
    if (a1!=a2) {S=(a1+a2)*2;}
    else {S=(a1+a3)*2;}
    return S;
}
int Circle(int a1){
    double S;
    S=3.14*a1*a1;
    return S;
}

int Factorial(int x) {
    int p = 1, j=0;
    while (j<x) {
        j++;
        p*=j;
        
    }
    return p;
}

int Divide(int t) {
    int count=0;
    while (t%10>0) {
        count+=1;
        t=t/10;
    }
    return count;
}

int main() {

    // Geom Fig
    int arr[4], j=0, count=0, rez=0, n;
    cout << "how many sides does your figure have: ";
    cin >> count;
    for (int i; i<=count; i++) {
            cout << "enter x" << j++ <<" value ";
            cin >> arr[i];
        }
    if (count == 3) rez=Triangle(arr[0], arr[1], arr[2]);
    if (count == 4) rez=Rectangle(arr[0], arr[1], arr[2], arr[3]);
    if (count == 0) rez=Circle(arr[0]);

    cout << "S = " << rez << endl;
    
    // Ex 1
    int n1, i1=1;
    double y1, sum_sin1=0;
    cout << "enter n: ";
    cin >> n1;
    while (i1<=n1) {
        sum_sin1 += sin(i1);
        y1+=i1/sum_sin1;
        i1++;
    }
    cout << "y1(" << n1 << "): " << y1 << endl;

    // Ex 2
    int n2, i2=1;
    double y2, sum_sin2=0;
    cout << "enter n: ";
    cin >> n2;
    while (i2<=n2) {
        sum_sin2 += sin(2*i2);
        y2+=Factorial(i2)/sum_sin2;
        i2++;
    }
    cout << "y2(" << n2 << "): " << y2 << endl;

    // Ex 5
    cout << "enter n: ";
    cin >> n;
    cout << "There are " << Divide(n) << " digits in " << n << endl;

    

}