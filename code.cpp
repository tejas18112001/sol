
#include<bits/stdc++.h>
using namespace std ;

int monthDays[12] = { 31, 59, 90, 120, 151, 181, 212, 243,
273, 304, 334, 365 };

unordered_map<string , vector<pair<string , int>> > mp ;


int dateDiff(int date1[] , int date2[]) {
     long int  days1 = date1[2]*365 ;
     days1 += monthDays[date1[1]] ;
     days1 += date1[0] ;

     long int  days2 = date2[2]*365 ;
     days2 += monthDays[date2[1]] ;
     days2 += date2[0] ;

     return abs(days2 - days1) ;
}

vector<int> solution() {
    vector<int>average  ;
     int ans = 0 ; 
     int val = 0 ;
     for( auto i : mp) {
        ans = 0 ;
      int val = i.second.size() ;
      for(auto j : i.second) {
         ans += j.second ;
      }

      average.push_back(ans/val) ;
       
     }
    
   return average ;

}

int main() {
    
   
     

    // inside vector of vector  v[0] book name , v[1] date difference 
    
   
    int year , month  , date  , year2 , month2  , date2 ;

   //  for(int i = 0 ; i<3 ; i++) {

 
   
    string m1 ;
    cout<<"Enter the name "<<endl ;
    cin>>m1 ;
    
    
    for(int i = 0 ; i<2 ; i++) {
     
    string book  ;
    cout<<"Enter the book name "<<endl ;
    cin>>book  ;
    
    cout<<"Enter the issue year , month , and date :"<<endl ;
    cin>>year>>month>>date ;
    cout<<"Enter the return date year , month and date :"<<endl ;
    cin>>year2>>month2>>date2 ;
    



    int d1[3]  =  {date , month , year} ;
    int d2[3]  = {date2 , month2 , year2} ;
   
    int day = dateDiff(d1 , d2) ;

    mp[m1].push_back({book  , day}) ;
   
    }
    
   //  }
   vector<int> ans =  solution() ;

   for(auto i : ans) {
    cout<<"Average day :" << i<<endl  ;
   }
    
    return 0 ;
}