#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>


using namespace std;
int main (){
    int a, b, low, high;
    int w=0, k=0;
    cin >> a;
    int ary[a-1];
    for (int i=0; i<a; i++) {
        cin >> b;
        ary[i]=b;
    }
    sort(ary, ary+a);
    if(ary[a-1]<60){
        w=1;
    }
    if (ary[0]>=60) {
        k=1;
    }
    
    for (int i=0; i<a; i++) {
        if(a==1){
            low=ary[0];
            high=ary[0];
        }
        else if (ary[i]>=60) {
            low=ary[i];
            high=ary[i-1];
            break;
        }
    }
    
    for (int i=0; i<a; i++) {
        cout << ary[i] << " ";
    }
    cout << endl;
    if (k==1) {
        cout << "best case";
    }else{
        cout << high ;;
    }
    cout << endl;
    if (w==1) {
        cout << "worst case";
    }else{
        cout << low << endl;
    }
    
    
    
    return 0;
}
