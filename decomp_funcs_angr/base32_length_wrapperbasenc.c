int base32_length_wrapper()
{
    unsigned int v1;  // edi

    return ((long long)(((((long long)v1) + 4) * 1717986919 >> 33) - ((long long)(((long long)v1) + 4 >> 31)))) * 8;
}
