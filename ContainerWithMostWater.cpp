class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int x=0,y=n-1,mx=0;
        while(x<y){
            mx=max(mx,min(h[x],h[y])*(y-x));
            if(h[x]==h[y]) {
                if(h[x+1]>h[y-1]) x++;
                else y--;
            }
            else if(h[x]>h[y]) y--;
            else x++;
        }
        return mx;
    }
};
