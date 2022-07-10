extern struct_0 frp;
extern struct_0 n_frp;
extern struct_0 n_frp_allocated;

int add_range_pair()
{
    BOT tmp_26;  // tmp #26
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rbp
    unsigned long v5;  // rsi
    unsigned long long v6[2];  // rdi
    unsigned long v7;  // rdi
    unsigned long long v8;  // rdi

    v4 = v7;
    v2 = n_frp;
    v8 = frp;
    if (n_frp != n_frp_allocated)
    {
        tmp_26 = v2;
        v3 = v2 + 1;
        v6 = v8 + tmp_26 * 16;
        v6[0] = v4;
        v6[1] = v5;
        n_frp = v3;
        return tmp_26 * 16;
    }
    v1 = x2nrealloc();
    v2 = n_frp;
    frp = v1;
    v8 = v1;
    tmp_26 = v2;
    v3 = v2 + 1;
    v6 = v8 + tmp_26 * 16;
    v6[0] = v4;
    v6[1] = v5;
    n_frp = v3;
    return tmp_26 * 16;
}
