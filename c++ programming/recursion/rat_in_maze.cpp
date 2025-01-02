// // class Solution{
// //     private:
// //     bool isTrueFalse(int newx , int newy, int n, vector<vector<int>>&m, vector<vector<bool>> &visitedvector, vector<string >&ans, string &path){
// //         if((newx>=0 and newx<n) and (newy>=0 and newy<n) and (visitedvector[newx][newy]!=1) and m[newx][newy]==1){
// //             return true;
            
// //         }
// //         else{
// //             return false;
            
// //         }
        
        
        
// //     }
// //     void solve(int x, int y, int n,vector<vector<int>>&m, vector<vector<bool>>&visitedvector, vector<string> &ans, string path){
// //         if(x==n-1 and y==n-1){
        
// //         ans.push_back(path);
// //         return;
        
        
            
// //         }
// //        //down
// //         if(isTrueFalse(x+1, y, n,m,visitedvector, ans , path)){
// //             visitedvector[x][y]=1;
// //             solve(x+1, y, n, m, visitedvector, ans, path+'D');
// //             visitedvector[x][y]=0;
            
            
// //         }
        
// //         //left
// //         if(isTrueFalse(x, y-1, n, m, visitedvector, ans, path)){
            
// //             visitedvector[x][y]=1;
// //             solve(x, y-1, n, m, visitedvector, ans, path+'L');
// //             visitedvector[x][y]=0;
            
// //         }
// //         //right
        
// //     if(isTrueFalse(x, y+1, n, m, visitedvector, ans, path)){
            
// //             visitedvector[x][y]=1;
// //             solve(x, y+1, n, m, visitedvector, ans, path+'R');
// //             visitedvector[x][y]=0;
            
// //         }
        
// //         if(isTrueFalse(x-1, y, n, m, visitedvector, ans, path)){
            
// //             visitedvector[x][y]=1;
// //             solve(x-1, y, n, m, visitedvector, ans, path+'U');
// //             visitedvector[x][y]=0;
            
// //         }
// //     }
// //     public:
// //     vector<string> findPath(vector<vector<int>> &m, int n) {
// //         //sollutionn here the answer is 
// //         vector<vector<bool>>visitedvector(n, vector<bool>(n,0));
// //        vector<string>ans;
// //        string path="";
// //         if(m[0][0]==0){
// //             return ans;
// //         }
// //          solve(0,0, n, m, visitedvector, ans , path);
// //          return ans;
         
// //     }
// // };class Solution{
//     private:
    bool isTrueFalse(int newx , int newy, int n, vector<vector<int>>&m, vector<vector<bool>> &visitedvector, vector<string >&ans, string &path){
        if((newx>=0 and newx<n) and (newy>=0 and newy<n) and (visitedvector[newx][newy]!=1) and m[newx][newy]==1){
            return true;
            
        }
        else{
            return false;
            
        }
        
        
        
    }
    void solve(int x, int y, int n,vector<vector<int>>&m, vector<vector<bool>>&visitedvector, vector<string> &ans, string path){
        if(x==n-1 and y==n-1){
        
        ans.push_back(path);
        return;
        
        
            
        }
       //down
        if(isTrueFalse(x+1, y, n,m,visitedvector, ans , path)){
            visitedvector[x][y]=1;
            solve(x+1, y, n, m, visitedvector, ans, path+'D');
            visitedvector[x][y]=0;
            
            
        }
        
        //left
        if(isTrueFalse(x, y-1, n, m, visitedvector, ans, path)){
            
            visitedvector[x][y]=1;
            solve(x, y-1, n, m, visitedvector, ans, path+'L');
            visitedvector[x][y]=0;
            
        }
        //right
        
    if(isTrueFalse(x, y+1, n, m, visitedvector, ans, path)){
            
            visitedvector[x][y]=1;
            solve(x, y+1, n, m, visitedvector, ans, path+'R');
            visitedvector[x][y]=0;
            
        }
        
        if(isTrueFalse(x-1, y, n, m, visitedvector, ans, path)){
            
            visitedvector[x][y]=1;
            solve(x-1, y, n, m, visitedvector, ans, path+'U');
            visitedvector[x][y]=0;
            
        }
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        //sollutionn here the answer is 
        vector<vector<bool>>visitedvector(n, vector<bool>(n,0));
       vector<string>ans;
       string path="";
        if(m[0][0]==0){
            return ans;
        }
         solve(0,0, n, m, visitedvector, ans , path);
         return ans;
         
    }
};