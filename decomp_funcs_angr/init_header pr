typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_0 chars_per_line;
extern struct_1 custom_header;
extern struct_1 date_text;
extern struct_1 file_text;
extern unsigned int g_40d02f;
extern struct_0 header_width_available;
extern struct_2 timespec.7656;

int init_header()
{
    unsigned long|BOT v0;  // [bp-0x138]
    unsigned long v1;  // [bp-0x130]
    unsigned long long v11;  // rax
    unsigned int v12;  // ebx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbp
    unsigned int v15;  // rsi
    char v16[2];  // rdi
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // r14
    char v2;  // [bp-0x128]
    struct_1 *v20;  // fs
    char v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0x90]
    unsigned long v5;  // [bp-0x88]
    unsigned long v6;  // [bp-0x40]
    unsigned long long v9;  // rax

    v17 = ((unsigned int)v15);
    if (v16[0] == 45)
    {
        if (v16[1] == 0)
        {
            v17 = -1;
        }
    }
    if (v16[1] != 0 || v16[0] != 45)
    {
        if (((int)((unsigned int)v15)) >= 0)
        {
            v9 = __fxstat(0x1, ((unsigned int)v15), ((int)&v3));
            if (v9 == 0)
            {
                v19 = v5;
                v9 = v4;
                v1 = v5;
                v0 = v9;
            }
        }
    }
    if (((int)((unsigned int)v15)) < 0 || v9 != 0 || v16[1] == 0 && v16[0] == 45)
    {
        if (timespec.7656 == 0)
        {
            gettime();
        }
        v0 = timespec.7656;
        v19 = ((long long)*((long long *)(((char *)&v0) + 8)));
    }
    if (localtime_rz() != 0)
    {
        v18 = (long long)nstrftime() + 1;
        v14 = (long long)xmalloc();
        nstrftime();
    }
    else
    {
        v14 = (long long)xmalloc();
        __sprintf_chk(((int)v14), 0x1, 0x21, &g_40d02f, imaxtostr(), v19, ((int)v0), ((int)*((int *)(((char *)&v0) + 8))), v2);
    }
    rpl_free();
    v11 = custom_header;
    date_text = v14;
    if (custom_header != 0)
    {
        file_text = v11;
        v13 = ((long long)(chars_per_line - gnu_mbswidth()));
        v12 = ((int)(v13 - (long long)gnu_mbswidth()));
        header_width_available = v12;
        return v6 ^ *(v20 + 0x28);
    }
    v11 = (((char)(v17 >> 31 & 1 ^ 1))? v16 : 4247685);
    file_text = v11;
    v13 = ((long long)(chars_per_line - gnu_mbswidth()));
    v12 = ((int)(v13 - (long long)gnu_mbswidth()));
    header_width_available = v12;
    return v6 ^ *(v20 + 0x28);
}
