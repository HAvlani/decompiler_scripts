int blake2b_init_param()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // rsi
    unsigned long long v4;  // r8

    blake2b_init0();
    v2 = 0;
    do
    {
        *(v4 + v2 * 8) = *(v4 + v2 * 8) ^ *(v3 + v2 * 8);
        v2 += 1;
    }
    while (v2 != 8);
    *(v4 + 232) = ((long long)*(v3));
    return 0;
}
