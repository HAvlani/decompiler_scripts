typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_414608;
extern unsigned int g_414614;
extern unsigned int g_41461b;
extern unsigned int g_41461f;
extern unsigned int g_41462f;
extern unsigned int g_414646;
extern unsigned int g_4146c0;
extern unsigned int g_414770;
extern unsigned int g_414798;
extern unsigned int g_4147b8;
extern unsigned int g_4147e0;
extern unsigned int g_414808;
extern unsigned int g_414838;
extern struct_0 g_414908;
extern unsigned int version_etc_copyright;

int version_etc_arn()
{
    unsigned long v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long v10;  // [bp-0x40]
    char v11;  // [bp-0x20]
    char v12;  // [bp-0x18]
    unsigned long long v14;  // rax
    unsigned long long v16;  // rcx
    unsigned long long|unsigned int v17;  // rcx
    unsigned long v18;  // rdx
    unsigned long v19;  // rdx
    unsigned long v2;  // [bp-0x88]
    unsigned long|unsigned int v20;  // rdx
    unsigned long long v21[9];  // rbx
    unsigned long v22;  // rsi
    void *v23;  // rdi
    unsigned int v24;  // edi
    unsigned long long [9]|unsigned long long v25;  // r8
    unsigned long long v26;  // r9
    unsigned long long v27;  // r10
    unsigned long v28;  // r12
    struct_0 *|unsigned long|unsigned long long v29;  // r12
    unsigned long v3;  // [bp-0x80]
    unsigned long v30;  // r13
    unsigned long|unsigned long long v31;  // r13
    unsigned long long v32;  // r15
    unsigned long long v33;  // r15
    unsigned long long v34;  // r15
    unsigned long v4;  // [bp-0x78]
    unsigned long v5;  // [bp-0x70]
    unsigned long|unsigned long long v6;  // [bp-0x60]
    unsigned long|unsigned long long v7;  // [bp-0x58]
    unsigned long|unsigned long long v8;  // [bp-0x50]
    unsigned long v9;  // [bp-0x48]

    v29 = v26;
    v21 = v25;
    if (v22 != 0)
    {
        __fprintf_chk(v24, 0x1, &g_414608, ((int)v22), v20);
    }
    else
    {
        __fprintf_chk(v24, 0x1, &g_414614, v20, v17);
    }
    __fprintf_chk(((int)v23), 0x1, &version_etc_copyright, dcgettext(0x0, &g_41461b, 0x5), 0x7e6);
    fputc_unlocked(0xa, v23);
    __fprintf_chk(((int)v23), 0x1, dcgettext(0x0, &g_4146c0, 0x5), &g_414770, v25);
    fputc_unlocked(0xa, v23);
    switch (v26)
    {
    case 0:
        return v14;
    case 1:
        dcgettext(0x0, &g_41461f, 0x5);
        break;
    case 2:
        dcgettext(0x0, &g_41462f, 0x5);
        break;
    case 3:
        dcgettext(0x0, &g_414646, 0x5);
        break;
    case 4:
        v34 = v21[3];
        v30 = v21[1];
        v28 = v21[0];
        v18 = dcgettext(0x0, &g_414798, 0x5);
        v4 = v34;
        __fprintf_chk(((int)v23), 0x1, v18, v28, v30);
        return v4;
    case 5:
        v34 = v21[3];
        v30 = v21[1];
        v6 = v21[4];
        v28 = v21[0];
        v18 = dcgettext(0x0, &g_4147b8, 0x5);
        v5 = v6;
        v4 = v34;
        __fprintf_chk(((int)v23), 0x1, v18, v28, v30);
        return v4;
    case 6:
        v16 = v21[4];
        v32 = v21[3];
        v7 = v21[5];
        v6 = v16;
        v19 = dcgettext(0x0, &g_4147e0, 0x5);
        v4 = v7;
        v3 = v6;
        v2 = v32;
        return __fprintf_chk(((int)v23), 0x1, v19, ((int)v11), ((int)v12));
    case 7:
        v25 = v25[5];
        v16 = v21[4];
        v32 = v21[3];
        v8 = v21[6];
        v7 = v25;
        v6 = v16;
        v19 = dcgettext(0x0, &g_414808, 0x5);
        v5 = v8;
        v4 = v7;
        v3 = v6;
        v2 = v32;
        return __fprintf_chk(((int)v23), 0x1, v19, ((int)v11), ((int)v12));
    case 8:
        v26 = v21[6];
        v25 = v21[5];
        v17 = v21[4];
        v33 = v21[3];
        v9 = v21[7];
        v31 = v21[1];
        v29 = v21[0];
        v8 = v26;
        v7 = v25;
        v6 = v17;
        v20 = dcgettext(0x0, &g_414838, 0x5);
        v4 = v9;
        v3 = v8;
        v2 = v7;
        v1 = v6;
        v0 = v33;
        v14 = __fprintf_chk(((int)v23), 0x1, v20, v28, v30);
        return v14;
    case 9:
        v27 = v21[7];
        v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v26 = v21[6];
        v25 = v21[5];
        v17 = v21[4];
        v33 = v21[3];
        v10 = v21[8];
        v31 = v21[1];
        v9 = v27;
        v8 = v26;
        v29 = v21[0];
        v7 = v25;
        v6 = v17;
    default:
        v27 = v21[7];
        v22 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v26 = v21[6];
        v25 = v21[5];
        v17 = v21[4];
        v33 = v21[3];
        v10 = v21[8];
        v31 = v21[1];
        v9 = v27;
        v8 = v26;
        v29 = v21[0];
        v7 = v25;
        v6 = v17;
    }
    if (v26 <= 9)
    {
        v14 = ((long long)*(g_414908 + v29 * 4)) + &g_414908;
    }
    v20 = dcgettext(0x0, v22, 0x5);
    v5 = v10;
    v4 = v9;
    v3 = v8;
    v2 = v7;
    v1 = v6;
    v0 = v33;
    v14 = __fprintf_chk(((int)v23), 0x1, v20, v28, v30);
    return v14;
}
