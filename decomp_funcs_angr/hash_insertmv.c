int hash_insert()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v2 = hash_insert_if_absent();
    if (v2 != -1)
    {
        v3 = (v2 == 0? v0 : rsi<8>);
        return v3;
    }
    v3 = 0;
    return v3;
}
