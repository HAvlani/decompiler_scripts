typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[24];
    char field_28;
    char padding_29[7];
    unsigned long long field_30;
} struct_2;

extern unsigned int g_4101d8;
extern struct_0 mount_list.7776;
extern char tried_mount_list.7777;

int find_bind_mount()
{
    char v0;  // [bp-0x158]
    unsigned long v1;  // [bp-0x150]
    unsigned long long v10;  // r13
    char v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    struct_2 * v7;  // rbx
    unsigned long long v8;  // rbp
    char *v9;  // rdi

    if (tried_mount_list.7777 == 0)
    {
        mount_list.7776 = (long long)read_file_system_list();
        if (mount_list.7776 == 0)
        {
            v10 = dcgettext(0x0, &g_4101d8, 0x5);
            error(0x0, *(__errno_location()), "%s");
        }
        tried_mount_list.7777 = 1;
    }
    v5 = __xstat(0x1, ((int)v9), ((int)&v0));
    if (v5 == 0)
    {
        v7 = mount_list.7776;
        if (mount_list.7776 != 0)
        {
            while (true)
            {
                if (((long long)(v7->field_28 & 1)) != 0)
                {
                    v8 = v7->field_0;
                    if (*(v7->field_0) == 47)
                    {
                        v5 = strcmp(v7->field_8, v9);
                        if (v5 == 0)
                        {
                            v5 = __xstat(0x1, v8, ((int)&v2));
                            if (v5 == 0 && v0 == v2 && v1 == v3)
                            {
                                v6 = v7->field_0;
                                return v6;
                            }
                        }
                    }
                }
                if (((long long)(v7->field_28 & 1)) == 0 || v5 != 0 || v5 != 0 || *(v7->field_0) != 47 || v0 != v2 || v1 != v3)
                {
                    v7 = v7->field_30;
                    v6 = 0;
                    return v6;
                }
            }
        }
        v6 = 0;
        return v6;
    }
    v6 = 0;
    return v6;
}
