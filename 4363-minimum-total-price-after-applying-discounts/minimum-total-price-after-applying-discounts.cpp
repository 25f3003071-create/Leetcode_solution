class Solution {
public:
double discount(int prices,int discounts){
    return (prices*(100-discounts))/100.0;
}
    double minPrice(vector<int>& p, vector<int>& d) {
        sort(p.begin(),p.end(),greater<int>());
        sort(d.begin(),d.end(),greater<int>());

        int j=0;
        double ans=0.0;
        for(int i=0;i<d.size() &&j<p.size(); i++){
            ans+=(discount(p[j],d[i]));
            cout<<ans<<endl;
            j++;
        

        }
        while(j<p.size()){
            ans+=p[j];
            j++;
        }
        return ans;
        

    }
};