class Solution {
public:

bool isPossible(vector<int>& position, int m,int mid){
    int count=1;
    int lasPos=position[0];
    for(int i=0;i<position.size();i++){
        if(position[i]-lasPos>=mid){
            count++;
            if(count==m){
                return true;
            }
            lasPos=position[i];
        }
    }
    return false;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int s=0;
        int ans=-1;
        int maxi;
        for(int i=0;i<position.size();i++){
            maxi= max(position[i],maxi);
        }
        int e=maxi;
        int mid= s+(e-s)/2;

        while(s<=e){
            if(isPossible(position,m,mid)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid= s+(e-s)/2;
        
        }
        return ans;

    }
};