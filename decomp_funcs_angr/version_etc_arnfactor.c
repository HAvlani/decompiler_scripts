typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_41b812;
extern unsigned int g_41b81e;
extern unsigned int g_41b825;
extern unsigned int g_41b829;
extern unsigned int g_41b839;
extern unsigned int g_41b850;
extern unsigned int g_41b8c8;
extern unsigned int g_41b978;
extern unsigned int g_41b9a0;
extern unsigned int g_41b9c0;
extern unsigned int g_41b9e8;
extern unsigned int g_41ba10;
extern unsigned int g_41ba40;
extern struct_0 g_41bb10;
extern unsigned int version_etc_copyright;

int version_etc_arn()
{
    unsigned long v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long v10;  // [bp-0x40]
    char v11;  // [bp-0x20]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rcx
    unsigned long v17;  // rdx
    unsigned long|unsigned int v18;  // rdx
    unsigned long v19;  // rdx
    unsigned long v2;  // [bp-0x88]
    unsigned long long v20[9];  // rbx
    unsigned long v21;  // rsi
    void *v22;  // rdi
    unsigned int v23;  // edi
    unsigned long long|unsigned long long [9] v24;  // r8
    unsigned long long v25;  // r9
    unsigned long long v26;  // r10
    unsigned long v27;  // r12
    unsigned long|unsigned long long|struct_0 * v28;  // r12
    unsigned long long v29;  // r15
    unsigned long v3;  // [bp-0x80]
    unsigned long long v30;  // r15
    unsigned long long v31;  // r15
    unsigned long v4;  // [bp-0x78]
    unsigned long v5;  // [bp-0x70]
    unsigned long|unsigned long long v6;  // [bp-0x60]
    unsigned long|unsigned long long v7;  // [bp-0x58]
    unsigned long|unsigned long long v8;  // [bp-0x50]
    unsigned long|unsigned long long v9;  // [bp-0x48]

    v28 = v25;
    v20 = v24;
    if (v21 != 0)
    {
        __fprintf_chk(v23, 0x1, &g_41b812, ((int)v21));
    }
    else
    {
        __fprintf_chk(v23, 0x1, &g_41b81e, v18);
    }
    __fprintf_chk(((int)v22), 0x1, &version_etc_copyright, dcgettext(0x0, &g_41b825, 0x5));
    fputc_unlocked(0xa, v22);
    __fprintf_chk(((int)v22), 0x1, dcgettext(0x0, &g_41b8c8, 0x5), &g_41b978);
    fputc_unlocked(0xa, v22);
    switch (v25)
    {
    case 0:
        return v14;
    case 1:
        dcgettext(0x0, &g_41b829, 0x5);
        break;
    case 2:
        dcgettext(0x0, &g_41b839, 0x5);
        break;
    case 3:
        dcgettext(0x0, &g_41b850, 0x5);
        break;
    case 4:
        v31 = v20[3];
        v27 = v20[0];
        v17 = dcgettext(0x0, &g_41b9a0, 0x5);
        v4 = v31;
        __fprintf_chk(((int)v22), 0x1, v17, v27);
        return v4;
    case 5:
        v31 = v20[3];
        v6 = v20[4];
        v27 = v20[0];
        v17 = dcgettext(0x0, &g_41b9c0, 0x5);
        v5 = v6;
        v4 = v31;
        __fprintf_chk(((int)v22), 0x1, v17, v27);
        return v4;
    case 6:
        v16 = v20[4];
        v29 = v20[3];
        v7 = v20[5];
        v6 = v16;
        v19 = dcgettext(0x0, &g_41b9e8, 0x5);
        v4 = v7;
        v3 = v6;
        v2 = v29;
        return __fprintf_chk(((int)v22), 0x1, v19, ((int)v11));
    case 7:
        v24 = v24[5];
        v16 = v20[4];
        v29 = v20[3];
        v8 = v20[6];
        v7 = v24;
        v6 = v16;
        v19 = dcgettext(0x0, &g_41ba10, 0x5);
        v5 = v8;
        v4 = v7;
        v3 = v6;
        v2 = v29;
        return __fprintf_chk(((int)v22), 0x1, v19, ((int)v11));
    case 8:
        v25 = v20[6];
        v24 = v20[5];
        v15 = v20[4];
        v30 = v20[3];
        v9 = v20[7];
        v28 = v20[0];
        v8 = v25;
        v7 = v24;
        v6 = v15;
        v18 = dcgettext(0x0, &g_41ba40, 0x5);
        v4 = v9;
        v3 = v8;
        v2 = v7;
        v1 = v6;
        v0 = v30;
        v14 = __fprintf_chk(((int)v22), 0x1, v18, v27);
        return v14;
    case 9:
        v26 = v20[7];
        v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v25 = v20[6];
        v24 = v20[5];
        v15 = v20[4];
        v30 = v20[3];
        v10 = v20[8];
        v9 = v26;
        v8 = v25;
        v28 = v20[0];
        v7 = v24;
        v6 = v15;
    default:
        v26 = v20[7];
        v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v25 = v20[6];
        v24 = v20[5];
        v15 = v20[4];
        v30 = v20[3];
        v10 = v20[8];
        v9 = v26;
        v8 = v25;
        v28 = v20[0];
        v7 = v24;
        v6 = v15;
    }
    if (v25 <= 9)
    {
        v14 = ((long long)*(g_41bb10 + v28 * 4)) + &g_41bb10;
    }
    v18 = dcgettext(0x0, v21, 0x5);
    v5 = v10;
    v4 = v9;
    v3 = v8;
    v2 = v7;
    v1 = v6;
    v0 = v30;
    v14 = __fprintf_chk(((int)v22), 0x1, v18, v27);
    return v14;
}
