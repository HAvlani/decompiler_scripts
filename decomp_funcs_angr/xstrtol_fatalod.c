typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_0 exit_failure;
extern char g_40e3a5;

int xstrtol_fatal()
{
    char v0;  // [bp-0x32]
    char v1;  // [bp-0x31]
    unsigned long v10;  // rdi
    unsigned long long|unsigned int v11;  // r9
    unsigned long v12;  // r12
    unsigned long v13;  // r13
    struct_1 *v14;  // fs
    unsigned long v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    char v7;  // dl
    unsigned long v8;  // rbx
    unsigned int v9;  // esi

    v5 = v13;
    v4 = v12;
    v3 = v8;
    v2 = *(v14 + 0x28);
    if (((int)v10) <= 3)
    {
        if (!(((int)v10) <= 1))
        {
            v11 = "invalid suffix in %s%s argument '%s'";
        }
        else if (((char)(v10 == 1)))
        {
            v11 = &g_40e3a5;
        }
        if (((char)(v10 == 1)) || ((int)v10) > 1)
        {
            if (v9 >= 0)
            {
                error(exit_failure, 0x0, dcgettext(0x0, ((unsigned int)v11), 0x5));
            }
            else
            {
                v0 = v7;
                v1 = 0;
                error(exit_failure, 0x0, dcgettext(0x0, ((unsigned int)v11), 0x5));
            }
        }
    }
    else
    {
        v11 = "invalid %s%s argument '%s'";
        if (v9 >= 0)
        {
            error(exit_failure, 0x0, dcgettext(0x0, ((unsigned int)v11), 0x5));
        }
        else
        {
            v0 = v7;
            v1 = 0;
            error(exit_failure, 0x0, dcgettext(0x0, ((unsigned int)v11), 0x5));
        }
    }
}