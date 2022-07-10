int base16_encode()
{
    BOT tmp_27;  // tmp #27
    BOT tmp_56;  // tmp #56
    BOT tmp_89;  // tmp #89
    BOT tmp_55;  // tmp #55
    BOT tmp_71;  // tmp #71
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    char v3;  // cl
    unsigned long long v5;  // rdx
    unsigned long v6;  // rsi
    char * v7;  // rdi
    unsigned long long v8;  // r8

    if (v6 != 0)
    {
        v8 = v7 + v6;
        do
        {
            tmp_27 = ((long long)*(v7));
            v5 = rdx<8> + 2;
            v7 += 1;
            v2 = tmp_27;
            v3 = ((char)(tmp_27 >> 4));
            v1 = ((long long)*(base16 + ((long long)(((int)tmp_27) & 15))));
            tmp_56 = rcx<8>;
            tmp_89 = ((int)tmp_56);
            tmp_55 = tmp_89;
            *(v5 + 2) = *(base16 + ((long long)(tmp_55 & 15)));
            tmp_71 = v1;
            *(v5 + 1) = tmp_71;
        }
        while (v7 != v8);
        return ((long long)*(base16 + ((long long)(((int)tmp_27) & 15))));
    }
    return ((long long)*(base16 + ((long long)(((int)tmp_27) & 15))));
}
