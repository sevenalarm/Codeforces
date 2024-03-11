def baz(ans, i, order):
    if i == 7: 
        return ans
    else:
        ans1 = baz(ans*8, i+1, order + ['*'])
        ans2 = baz(ans//8, i+1, order + ['/'])
        ans3 = baz(ans+8, i+1, order + ['+'])
        ans4 = baz(ans-8, i+1, order + ['-'])
        


possible  = []
ans = 8
i = 0
order = []
baz(ans, i, order)

