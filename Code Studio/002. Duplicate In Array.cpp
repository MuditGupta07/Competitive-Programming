/*https://www.naukri.com/code360/problems/duplicate-in-array_893397*/
int findDuplicate(vector<int> &arr) 
{
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans =ans^arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans =ans^i;
    }

    return ans;
	
}
