#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// example n =5

void print20(int n){
  // SPACES intitlize ( outside outer loop)
  int spaces =2*n-2; // the spaces gets updated in every line , eg line 3 have4 spaces and so on , so after i=n the spaces increses by 2(here spaces =0) , i.e space in 6 line will be 2 and so on . 

    for (int i=1;i<=2*n-1;i++){
   // Star main formula
        int stars;
        if (i < n){
            stars =i;
        }else { // (i > n)
            stars = 2*n-i;
        }
 // LEFT Stars printing
        for(int l=1;l<=stars;l++){
            cout<<"*";
        }
 // SPACE printing
    for( int k=1;k<=spaces;k++){
        cout<<" ";
    }
// RIGHT Star printing
    for(int r=1;r<=stars;r++){
        cout<<"*";
    }
    cout<<endl;

        // SPACE update
        if (i<n){
        spaces= spaces - 2 ; // spaces -=2
    }else{ //( i > n)
        spaces= spaces+2; // spaces +=2 
    }
    }
}
int main(){
    int n;
    cout<<" give n :";
    cin>>n;
    print20(n);
}