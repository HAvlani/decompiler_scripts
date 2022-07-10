int sha224_finish_ctx()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v3;  // r12

    v0 = v3;
    sha256_conclude_ctx();
}
