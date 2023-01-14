#User function Template for python3

from collections import Counter
class Fenwick:
    def __init__(self, n):
        self.tree = [0] * n
        self.F = lambda x: x&(x+1)
        self.H = lambda x: x|(x+1)
    
    def update(self, ind, delta):
        while ind < len(self.tree):
            self.tree[ind] += delta
            ind = self.H(ind)
    
    def query(self, ind):
        res = 0
        while ind >= 0:
            res += self.tree[ind]
            ind = self.F(ind) - 1
        return res

class Solution:
    def maximumToys(self, n, A, Q, Queries):
        mx = max(A)
        counter = Counter(A)
        #count stores frequencey and csum stores cumulative sum
        count, csum = Fenwick(mx+1), Fenwick(mx+1)
        
        for a in A:
            count.update(a, 1)
            csum.update(a, a)

        res = []
        for q in Queries:
            c = q[0]
            for b in q[2:]:
                count.update(A[b-1], -1)
                csum.update(A[b-1], -A[b-1])
            
            lo, hi = 0, mx
            while lo < hi:
                mid = lo + (hi - lo + 1)//2
                if csum.query(mid) > c:
                    hi = mid - 1
                else:
                    lo = mid
            # Take all elements <= lo and some occurences of lo+1       
            res.append(count.query(lo) + min((c - csum.query(lo))//(lo+1), counter[lo+1]))
            
            for b in q[2:]:
                count.update(A[b-1], 1)
                csum.update(A[b-1], A[b-1])
        
        return res

#{ 
 # Driver Code Starts


for _ in range(int(input())):
    N=int(input())
    A=[int(i) for i in input().strip().split()]
    Q=int(input())
    Queries=[[] for i in range(Q)]
    for i in range(Q):
        Queries[i].extend(int(i) for i in input().strip().split())
    obj=Solution()
    ans=obj.maximumToys(N,A,Q,Queries)
    for i in ans:
        print(i,end=" ")
    print()
    


# } Driver Code Ends