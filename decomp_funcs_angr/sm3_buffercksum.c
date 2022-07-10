int sm3_buffer()
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]

    v4 = 0;
    v0 = 5266030373879420527;
    v1 = 15747405644512379607;
    v2 = 1599121648331468988;
    v3 = 12752802501817658957;
    v5 = 0;
    sm3_process_bytes();
    sm3_conclude_ctx();
    return sm3_read_ctx();
}
