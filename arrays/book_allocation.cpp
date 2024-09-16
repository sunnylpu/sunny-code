bool ispossible(vector<int> arr,int n,int m,int mid){
    int studentcount=1;
    int pagesum=1;
    for(int i=0;i<n;i++){
        if(pagesum + arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }pagesum+=arr[i];
        }
    }return true;
}
int findPages(vector<int>& arr, int n, int m) 
    // Write your code here.
{	
	int s=0;
	int e=0;
	int sum=0;
    int ans=-1;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	 e=sum;
	int mid=s +(e-s)/2;
	while(s<=e){
		if(ispossible(arr,n,m,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid-1;

		}
		mid=s+(e-s)/2;	
	}return ans; 
}