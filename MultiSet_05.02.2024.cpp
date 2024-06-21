#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<double> m1;
    int n;
    cout << "Enter the number of the students: " << endl;
    cin >> n;
    while (n--)
    {
        double h;
        cin >> h;
        m1.insert(h);
    }
    cout << "Enter the height of the student to be checked: "<< endl;
    double chh;
    cin >> chh;
    double p = (*m1.upper_bound(chh) - chh)/100;
        if (p < 0.2)
        {
            cout << "Student will face sunlight." << endl;
        }else
        {
            cout << "Student will not face sunlight." << endl;
        }

    return 0;
}
