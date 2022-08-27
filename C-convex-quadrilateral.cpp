#include <bits/stdc++.h>
using namespace std;

// function that takes 2 consecutive coordinates, form a line segment, and check for other two
bool solve(vector<int> arr[], int index){
    
    // first coordinate
    int x1 = arr[index][0];
    int y1 = arr[index][1];
    index++;
    
    // second coordinate
    index = index%4;
    int x2 = arr[index][0];
    int y2 = arr[index][1];
    index++;
    
    // thied coordinate
    index = index%4;
    int x3 = arr[index][0];
    int y3 = arr[index][1];
    index++;
    
    // fourth coordinate
    index = index%4;
    int x4 = arr[index][0];
    int y4 = arr[index][1];
    index++;
    
    // check1
    int c1, c2;
    
    int s1 = y2-y1;
    int s2 = x2-x1;
    double s = ((double)s1) / ((double)s2); 
    
    double d1 = x3-x1;
    double d2 = x4-x1;
    if(x2 != x1 and y1 != y2){
        c1 = y3-y1 - (s)*(d1);
        c2 = y4-y1 - (s)*(d2);
    }
    else if(x1 == x2){
        c1 = x3-x1;
        c2 = x4-x1;
    }else if(y1 == y2){
        c1 = y3-y1;
        c2 = y4-y1;
    }
    
    if(c1*c2 >= 0){
        return true;
    }
    return false;
}

int main(){
    
    vector<int> arr[4];
    for(int i=0; i<4; i++){
        int x, y; cin>>x>>y;
        arr[i].push_back(x);
        arr[i].push_back(y);
    }

    bool check = true;
    for(int i=0;i<4;i++){
        check = check & solve(arr, i);
    }
    
    if(check)
        cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
