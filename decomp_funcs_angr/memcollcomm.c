int memcoll()
{
    BOT tmp_35;  // tmp #35
    BOT tmp_38;  // tmp #38
    unsigned int|char v0;  // [bp-0x40]
    char v1;  // [bp-0x39]
    unsigned long long v10;  // r9
    unsigned long long v11;  // r10
    char *v12;  // r12
    char *v13;  // r13
    char *v3;  // rcx
    char *v4;  // rdx
    char *v5;  // rbx
    char *v6;  // rbp
    char *v7;  // rsi
    char *v8;  // rdi
    unsigned long long v9;  // r8

    v13 = v4;
    v12 = v8;
    v6 = v3;
    v5 = v7;
    if (v7 == v3)
    {
        v0 = memcmp(v8, v4, v7);
        if (v0 != 0)
        {
            v10 = ((long long)*(v12 + v5));
            v9 = ((long long)*(v13 + v6));
            *(v12 + v5) = 0;
            *(v13 + v6) = 0;
            tmp_35 = v10;
            v1 = tmp_35;
            tmp_38 = v9;
            v0 = tmp_38;
            v11 = (long long)strcoll_loop();
            *(v8 + v7) = v1;
            *(v4 + v3) = v0;
            return v11;
        }
        *(__errno_location() + None) = 0;
        return v11;
    }
    v10 = ((long long)*(v12 + v5));
    v9 = ((long long)*(v13 + v6));
    *(v12 + v5) = 0;
    *(v13 + v6) = 0;
    tmp_35 = v10;
    v1 = tmp_35;
    tmp_38 = v9;
    v0 = tmp_38;
    v11 = (long long)strcoll_loop();
    *(v8 + v7) = v1;
    *(v4 + v3) = v0;
    return v11;
}
