class Solution {
public:
vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s++],v[e--]);
    }
    return v;
}
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1;
        int carry=0;
        vector<int> ans;

        while(i>=0 && k>0){
            int val1=num[i];
            int val2=k%10;
            int sum= val1+val2+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            k /=10;
            i--;
        }
        while(i>=0){
            int sum=num[i]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;
        }
          while (k > 0) {
            int sum = (k % 10) + carry;

            carry = sum / 10;
            sum = sum % 10;

            ans.push_back(sum);

            k /= 10;
        }
        while(carry!=0){
            int sum= carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            
        }
    return reverse(ans);

    }
};