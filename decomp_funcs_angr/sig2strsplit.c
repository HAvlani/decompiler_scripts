typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    unsigned short field_4;
} struct_0;

extern unsigned int g_40b9f4;
extern unsigned long long numname_table;

int sig2str()
{
    unsigned long long v10;  // r12
    unsigned long long v3;  // rax
    struct_1 * v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    struct_0 *v7;  // rbp
    char * v8;  // rsi
    char *|unsigned long long v9;  // rdi

    v5 = 0;
    v4 = &numname_table;
    v7 = v8;
    v6 = v9;
    while (true)
    {
        if (v4->field_0 != ((int)v9))
        {
            v5 = ((long long)(((int)v5) + 1));
            v4 += 12;
            v10 = __libc_current_sigrtmin();
            if (((int)v10) > ((int)v9))
            {
                v3 = -1;
                return v3;
            }
            else if (((int)v10) < ((int)v9))
            {
                v3 = -1;
                return v3;
            }
            else if (((int)((((long long)(v10 - v10)) >> 1) + v10)) < ((int)v9))
            {
                v7->field_0 = 1095586898;
                v10 = __libc_current_sigrtmax();
                v7->field_4 = 88;
                break;
            }
            else
            {
                v7->field_0 = 1229804626;
                v7->field_4 = 78;
                break;
            }
        }
        else
        {
            v5 *= 3;
            v9 = v8;
            v8 = &numname_table + v5 * 4 + 4;
            strcpy(v9, v8);
            v3 = 0;
            return v3;
        }
    }
    v3 = ((long long)(v6 - v10));
    if (((int)v6) == ((int)v10))
    {
        return v3;
    }
    __sprintf_chk(((int)v7) + 5, 0x1, 0xffffffff, &g_40b9f4, ((int)v3));
    return 0;
}
