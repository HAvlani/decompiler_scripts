int sha224_buffer()
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]

    v4 = 0;
    v0 = 3926247204440088280;
    v1 = 17802264474907893015;
    v2 = 7518782744944446257;
    v3 = 13761399178871279527;
    v5 = 0;
    sha256_process_bytes();
    sha256_conclude_ctx();
    return sha224_read_ctx();
}
