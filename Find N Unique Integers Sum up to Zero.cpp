class Solution {
public:
    vector<int> sumZero(int n) 
    {
    int m=(n/2);
	vector<int>v;
	if(n&1)
		v.push_back(0);
      for(int i=0;i<n-1;i+=2)
	{
			v.push_back(m);
			v.push_back(-m);
			m--;	
	}	
	return v;    
    }
};