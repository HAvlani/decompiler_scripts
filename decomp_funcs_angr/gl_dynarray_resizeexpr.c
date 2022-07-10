int gl_dynarray_resize()
{
    unsigned long long v1;  // rax
    void *|unsigned long v2;  // rcx
    unsigned long v3;  // rdx
    unsigned long long v4[3];  // rbp
    unsigned long v5;  // rsi
    void *|unsigned long long [3] v6;  // rdi
    unsigned long v7;  // r12

    v4 = v6;
    if (v6[1] < v5)
    {
        v7 = v2;
        if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rsi<8>, rcx<8>, cc_ndep<8>))))
        {
            if (v6[2] != v3)
            {
                v6 = v6[2];
                v2 = realloc(v6, ((long long)(v5 * v2)));
                if (v2 == 0)
                {
                    v1 = 0;
                    return v1;
                }
            }
            v2 = malloc(((long long)(v5 * v2)));
            if (!(v2 != 0))
            {
                v1 = 0;
                return v1;
            }
            else if (v6[2] != 0)
            {
                v2 = memcpy(v2, v6[2], v7 * v6[0]);
            }
            if (v6[2] == v3 && v2 != 0 || v2 != 0 && v6[2] != v3)
            {
                v4[2] = v2;
                v4[1] = v5;
                v4[0] = v5;
                v1 = 1;
                return v1;
            }
        }
        *(__errno_location() + None) = 12;
        v1 = 0;
        return v1;
    }
    v4[0] = v5;
    v1 = 1;
    return v1;
}
