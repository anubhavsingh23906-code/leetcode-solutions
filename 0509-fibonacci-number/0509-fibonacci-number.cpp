class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        int c=1;
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        if(n==0){
            return 0;
            
        }
        for(int i=3; i <=n; i++){
            int m= v[i-1]+v[i-2];
            v.push_back(m);

            



        }
        return v[v.size()-1];
        
    }
};