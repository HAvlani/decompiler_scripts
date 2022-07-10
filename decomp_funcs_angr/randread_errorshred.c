typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 exit_failure;
extern unsigned int g_40c668;
extern unsigned int g_40c678;

int randread_error()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned int v3;  // eax
    char * v4;  // rdx
    unsigned long v5;  // rbx
    struct_0 *v6;  // rbx
    unsigned long v8;  // r12
    unsigned long long v9;  // r12

    v1 = v8;
    v0 = v5;
    v9 = (long long)quote();
    v6 = __errno_location();
    v3 = ((int)v6->field_0);
    if (v3 == 0)
    {
        v4 = dcgettext(0x0, &g_40c668, 0x5);
        error(exit_failure, v6->field_0, v4);
    }
    else
    {
        v4 = dcgettext(0x0, &g_40c678, 0x5);
        error(exit_failure, v6->field_0, v4);
    }
}
