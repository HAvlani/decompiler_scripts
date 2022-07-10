int sha256_read_ctx()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rdi

    v1 = 0;
    do
    {
        *(v2 + v1) = *(v3 + v1) * 0x1000000 | *(v3 + v1) * 0x100 & 0xff0000 | *(v3 + v1) >> 8 & 0xff00 | *(v3 + v1) >> 24 & 255;
        v1 += 4;
    }
    while (v1 != 32);
    return v2;
}
