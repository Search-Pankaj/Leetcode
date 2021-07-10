class Solution {
public:
    int candy(vector<int>& A) {
     //   ios_base::sync_with_stdio(false);
    vector<int> sol(A.size(),1);
    for(int i=A.size()-1;i>0;i--){
    if(A[i-1]>A[i])
    sol[i-1]=sol[i]+1;
    }
    
   // but insted of taking two array we simply update one array 
    for(int i=0;i<A.size()-1;i++)
    if(A[i+1]>A[i])
    sol[i+1]=max((sol[i]+1),sol[i+1]);
    int sm=0;
    for(int i=0;i<A.size();i++)
    {//cout<<sol[i]<<" ";
    sm+=sol[i];}
    
    return sm;
    }
};