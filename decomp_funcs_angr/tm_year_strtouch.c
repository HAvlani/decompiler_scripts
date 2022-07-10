int tm_year_str()
{
    char v0;  // [bp+0x0]
    unsigned long v1;  // [bp+0x8]
    unsigned long v2;  // rsi
    unsigned long v3;  // rdi
    unsigned int v4;  // edi
    unsigned long v5;  // r12

    __sprintf_chk(((int)v2), 0x1, 0xffffffff, ((int)(((long long)(-1900 <= v4)) + "-%02d%02d")), ((int)(...)), ((int)(...)), ((int)v5), v0, ((int)v1));
    return v2;
}
