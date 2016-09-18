class Solution {
public:

    int se(int st, int ed, int target, vector<int>&A){
        if (st>ed) {return -1;}
        else{
            int mid = st+(ed-st)/2;
            if (A[mid]==target){return mid;}

            if (A[mid]>=A[st]){
                if (target<=A[mid] && target>=A[st]){
                    return se(st,mid-1,target,A);
                }else{
                    return se(mid+1,ed,target,A);
                }
            }

            if (A[mid]<A[st]){

                if (target<=A[mid] || target >= A[st]){
                    return se(st,mid-1,target,A);
                }else{
                    return se(mid+1,ed,target,A);
                }

            }
            return -1;
        }

    }

    int search(vector<int>&A, int target) {
        int n=A.size();
        if (n==0){return -1;}
        return  se(0,n-1,target,A);
    }
};
