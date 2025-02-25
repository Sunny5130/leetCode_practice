class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int area=0;
        while(l<r){
        int currentarea=min(h[l], h[r]) * (r-l);
        area=max(area,currentarea);
        if(h[l]>h[r]){
            r--;
        }else{
            l++;
        }
        }
        return area;
    }
};





