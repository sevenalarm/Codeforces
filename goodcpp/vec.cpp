    // pair<int, int> p;
    // p = make_pair(a[0], 0);
    // chain.push_back(p);
    // dpl[0] = a[0];
    // for (ll i = 1; i < n; i++) {
    //     while (chain.size() && a[i] < chain.back().ft) {
    //         chain.pop_back();
    //     }
    //     if (chain.size() == 0) {
    //         dpl[i] = dpl[chain.back().sd] + (i - chain.back().sd) * a[i];

    //     } else dpl[i] = (i+1) * a[i];
    //     p.ft = a[i];
    //     p.sd = i;
    //     chain.push_back(p);
    // }

    // chain.clear();
    // p = make_pair(a[n-1], n-1);
    // chain.push_back(p);
    // dpr[n-1] = a[n-1];
    // for (ll i = n-2; i >= 0; i--) {
    //     while (chain.size() && a[i] < chain.back().ft) {
    //         chain.pop_back();
    //     }
    //     if (chain.size() == 0) {
    //         dpr[i] = dpr[chain.back().sd] + (chain.back().sd - i) * a[i];

    //     } else dpr[i] = (n - i) * a[i];
    //     p.ft = a[i];
    //     p.sd = i;
    //     chain.push_back(p);
    // }