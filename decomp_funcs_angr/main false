typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_406089;
extern unsigned int g_406318;

int main()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    struct_0 *v12;  // rsi
    unsigned int v13;  // edi
    unsigned long v2;  // [bp-0x8]
    unsigned long long v5;  // rax
    unsigned long long v7;  // rax
    unsigned long v9;  // rcx

    if (v13 != 2)
    {
        return 1;
    }
    v2 = &stack_base+0;
    v1 = v10;
    v0 = v9;
    set_program_name();
    setlocale();
    bindtextdomain(&g_406089, &g_406318);
    textdomain(&g_406089);
    atexit();
    v5 = strcmp(v12->field_8, "--help");
    if (v5 != 0)
    {
        v7 = strcmp(v12->field_8, "--version");
        if (v7 != 0)
        {
            v11 = v1;
            return 1;
        }
        else
        {
            version_etc();
            v11 = v1;
            return 1;
        }
    }
    else
    {
        usage(); /* do not return */
    }
}
