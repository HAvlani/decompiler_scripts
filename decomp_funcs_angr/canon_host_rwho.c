typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int hints.4124;

int canon_host_r()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    struct_0 *v4;  // rsi
    char *v5;  // rdi
    unsigned long v6;  // rdi
    unsigned long long v7;  // r12

    v0 = 0;
    hints.4124 = 2;
    v2 = getaddrinfo();
    if (v2 == 0)
    {
        v5 = (*(v0 + 32) == 0? v6 : *(v0 + 32));
        v7 = strdup(v5);
        if (!(v7 == 0))
        {
            freeaddrinfo(0x0);
            v3 = v7;
            return v3;
        }
        else if (v4 != 0)
        {
            v4->field_0 = -10;
            freeaddrinfo(0x0);
            v3 = v7;
            return v3;
        }
        else
        {
            freeaddrinfo(0x0);
            v3 = v7;
            return v3;
        }
    }
    v7 = 0;
    if (v4 == 0)
    {
        v3 = v7;
        return v3;
    }
    else
    {
        v4->field_0 = v2;
        v3 = v7;
        return v3;
    }
}
