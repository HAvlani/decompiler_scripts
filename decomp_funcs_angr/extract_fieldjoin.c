int extract_field()
{
    BOT tmp_25;  // tmp #25
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx
    unsigned long long v4[6];  // rbx
    unsigned long long v5;  // rbp
    unsigned long v6;  // rsi
    unsigned long long v7[6];  // rdi
    unsigned long long v8;  // rdi
    unsigned long long v9[2];  // rdi

    v5 = v2;
    v4 = v7;
    v1 = v7[3];
    v8 = v7[5];
    if (v1 < v4[4])
    {
        tmp_25 = v1;
        v3 = v1 + 1;
        v9 = v8 + tmp_25 * 16;
        v9[0] = v6;
        v9[1] = v5;
        v4[3] = v3;
        return tmp_25 * 16;
    }
    v4[5] = v8;
    v8 = (long long)x2nrealloc();
    tmp_25 = v1;
    v3 = v1 + 1;
    v9 = v8 + tmp_25 * 16;
    v9[0] = v6;
    v9[1] = v5;
    v4[3] = v3;
    return tmp_25 * 16;
}
