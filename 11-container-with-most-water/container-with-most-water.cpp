class Solution {
public:
    int maxArea(vector<int>& h) {
//------------------------====brute froce--
        // int mw=0;   
        // for(int i=0;i<h.size();i++){
        //     for(int j=i+1;j<h.size();j++){
        //         int w=j-i;
        //         int height=min(h[i],h[j]);
        //         int area=w*height;
        //         mw=max(mw,area);
        //     }
        // }
        // return mw;
//-----------------------------optimize using two pointer approach----------------------//
    int l=0;
    int r=h.size()-1;
    int mw=0;
    while(l<r){
        int area=(min(h[l],h[r]))*(r-l);
        mw=max(area,mw);
        if(h[l]<h[r]){
            l++;
        }else{
            r--;
        }
    }
    return mw;
    }
};