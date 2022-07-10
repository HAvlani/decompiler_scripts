typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int exit_status;

int verify_numeric()
{
    char v0;  // [bp-0x18]
    struct_0 * v3;  // rax
    char *v4;  // rsi
    unsigned long v5;  // rdi
    unsigned long long v6;  // r12

    v3 = __errno_location();
    if (!(v3->field_0 == 0))
    {
        quote();
        exit_status = 1;
        return error(0x0, *(v0), "%s");
    }
    else if (!(*(v4) != 0))
    {
        return v3;
    }
    else if (v4 != v5)
    {
        v6 = (long long)quote();
        v3 = error(0x0, 0x0, dcgettext(0x0, v4, 0x5));
        exit_status = 1;
        return v3;
    }
    else
    {
        v6 = (long long)quote();
        v3 = error(0x0, 0x0, dcgettext(0x0, v4, 0x5));
        exit_status = 1;
        return v3;
    }
}
