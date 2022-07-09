int hash_string()
{
    BOT tmp_27;  // tmp #27
    unsigned long long v1;  // rcx
    unsigned long long v2;  // rdx
    unsigned long v3;  // rsi
    char * v4;  // rdi

    v1 = ((long long)*(v4));
    v2 = 0;
    if (((long long)*(v4)) != 0)
    {
        do
        {
            tmp_27 = ((long long)v1);
            v4 += 1;
            v1 = ((long long)*(v4));
            v2 = ((long long)((0 CONCAT v2 * 31 + tmp_27) % v3 >> 64));
        }
        while (((char)v1) != 0);
        return v2;
    }
    return v2;
}
