extern <missing-type> default_quoting_options;

int quotearg_buffer()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // rcx
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // r8

    v7 = (v8 == 0? &default_quoting_options : v8);
    v3 = v6;
    v2 = v7[6];
    v1 = v7[5];
    v0 = v7 + 8;
    *(__errno_location() + None) = ((int)v5);
    return (long long)quotearg_buffer_restyled();
}
