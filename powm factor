int powm()
{
    BOT tmp_61;  // tmp #61
    unsigned long v1;  // rcx
    unsigned long long v2;  // rdx
    unsigned long|char v3;  // rsi
    unsigned long long v4;  // rdi
    unsigned long long v5;  // r8
    unsigned long long v6;  // r9

    v6 = v2;
    if (((long long)(v3 & 1)) != 0)
    {
        v5 = v4;
    }
    while (true)
    {
        v4 = (((long long)(v4 * v4 >> 64)) < ((long long)((v1 * ((long long)(v4 * v4))) * v6 >> 64))? ((long long)((v4 * v4 >> 64) - ((v1 * ((long long)(v4 * v4))) * v6 >> 64))) + v6 : ((long long)((v4 * v4 >> 64) - ((v1 * ((long long)(v4 * v4))) * v6 >> 64))));
        v3 = rsi<8> % 2;
        tmp_61 = sil<1>;
        if (((long long)(tmp_61 & 1)) != 0)
        {
            v5 = (((long long)(v5 * v4 >> 64)) < ((long long)((v1 * ((long long)(v5 * v4))) * v6 >> 64))? ((long long)((v5 * v4 >> 64) - ((v1 * ((long long)(v5 * v4))) * v6 >> 64))) + v6 : ((long long)((v5 * v4 >> 64) - ((v1 * ((long long)(v5 * v4))) * v6 >> 64))));
        }
        else
        {
            if (v3 == 0)
            {
                break;
            }
        }
    }
    return v5;
}
