int re_node_set_compare()
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3[3];  // rsi
    unsigned long long v4[3];  // rdi

    if (((long long)(((char)(v4 == 0)) | ((char)(v3 == 0)))) == 0)
    {
        v2 = v4[1];
        if (v4[1] != v3[1])
        {
            return v1;
        }
        while (true)
        {
            v2 -= 1;
            if (!(((char)(v2 - 1 >> 63))))
            {
                return v1;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}
