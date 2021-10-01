class NumArray {
public:
    vector<int> tree ;
    int n ; 
    
    NumArray(vector<int>& nums) {
        n = nums.size() ; 
        tree.resize(4*n) ; 
        makeTree(0 , nums , 0  , n-1 ) ; 
    }
    
     int sumRange(int left, int right) {
        return findSum(0 , n-1 ,  0, left , right ) ; 
    }
    
    void makeTree(int pos , vector<int> &nums , int lw , int ub )  {
        if(lw > ub )  return ; 
        if(lw == ub )  tree[pos] = nums[lw] ; 
        else {
            int mid = (lw+ub)/2 ;
            makeTree(2*pos+1 ,nums ,  lw , mid ) ; 
            makeTree(2*pos+2 , nums , mid+1 , ub) ; 
            tree[pos] = tree[2*pos+1] + tree[2*pos+2] ; 
            return ; 
        }
    }
    
    int findSum(int lb , int ub , int pos , int left , int right )   {
        if(lb > ub )  return 0 ; 
        if(right < lb || ub < left )  return 0 ; 
        if(left <= lb && right >= ub )  return tree[pos] ; 
        else {
            int mid = (lb+ub)/2 ; 
            int sum = findSum(lb , mid , 2*pos+1  , left , right ) ; 
            sum += findSum(mid+1 , ub , 2*pos+2 , left , right ) ; 
            return sum ; 
        }
    }
    
   
};
