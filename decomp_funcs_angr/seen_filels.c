int seen_file()
{
    BOT tmp_9;  // tmp #9
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long long v4;  // al
    unsigned long long v5[2];  // rdx
    unsigned long v6;  // rsi
    unsigned long v7;  // rdi

    v4 = 0;
    if (v7 != 0)
    {
        tmp_9 = v5[1];
        v0 = v6;
        v1 = tmp_9;
        v2 = v5[0];
        v4 = hash_lookup();
        v4 = ((char)(v4 != 0));
        return v4;
    }
    return v4;
}
