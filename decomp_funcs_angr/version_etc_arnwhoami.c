typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_406a7b;
extern unsigned int g_406a7f;
extern unsigned int g_406a8f;
extern unsigned int g_406aa6;
extern unsigned int g_406b20;
extern unsigned int g_406bf8;
extern unsigned int g_406c18;
extern unsigned int g_406c40;
extern unsigned int g_406c68;
extern unsigned int g_406c98;
extern struct_0 g_406d68;

int version_etc_arn()
{
    unsigned long v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long v10;  // [bp-0x40]
    unsigned long long v12;  // rax
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rdx
    unsigned long long v19[9];  // rbx
    unsigned long v2;  // [bp-0x88]
    unsigned long v20;  // rsi
    void *v21;  // rdi
    unsigned long long|unsigned long long [9] v22;  // r8
    unsigned long long v23;  // r9
    unsigned long long v24;  // r10
    struct_0 *v25;  // r12
    unsigned long long v26;  // r15
    unsigned long long v27;  // r15
    unsigned long long v28;  // r15
    unsigned long v3;  // [bp-0x80]
    unsigned long v4;  // [bp-0x78]
    unsigned long v5;  // [bp-0x70]
    unsigned long|unsigned long long v6;  // [bp-0x60]
    unsigned long|unsigned long long v7;  // [bp-0x58]
    unsigned long|unsigned long long v8;  // [bp-0x50]
    unsigned long|unsigned long long v9;  // [bp-0x48]

    v25 = v23;
    v19 = v22;
    if (v20 != 0)
    {
        __fprintf_chk();
    }
    else
    {
        __fprintf_chk();
    }
    dcgettext(0x0, &g_406a7b, 0x5);
    __fprintf_chk();
    fputc_unlocked(0xa, v21);
    dcgettext(0x0, &g_406b20, 0x5);
    __fprintf_chk();
    fputc_unlocked(0xa, v21);
    switch (v23)
    {
    case 0:
        return v12;
    case 1:
        dcgettext(0x0, &g_406a7f, 0x5);
        break;
    case 2:
        dcgettext(0x0, &g_406a8f, 0x5);
        break;
    case 3:
        dcgettext(0x0, &g_406aa6, 0x5);
        break;
    case 4:
        v26 = v22[3];
        v17 = dcgettext(0x0, &g_406bf8, 0x5);
        v4 = v26;
        __fprintf_chk();
        return v4;
    case 5:
        v26 = v19[3];
        v6 = v19[4];
        v17 = dcgettext(0x0, &g_406c18, 0x5);
        v5 = v6;
        v4 = v26;
        __fprintf_chk();
        return v4;
    case 6:
        v14 = v19[4];
        v28 = v19[3];
        v7 = v19[5];
        v6 = v14;
        v18 = dcgettext(0x0, &g_406c40, 0x5);
        v4 = v7;
        v3 = v6;
        v2 = v28;
        return __fprintf_chk();
    case 7:
        v22 = v22[5];
        v14 = v19[4];
        v28 = v19[3];
        v8 = v19[6];
        v7 = v22;
        v6 = v14;
        v18 = dcgettext(0x0, &g_406c68, 0x5);
        v5 = v8;
        v4 = v7;
        v3 = v6;
        v2 = v28;
        return __fprintf_chk();
    case 8:
        v23 = v19[6];
        v22 = v19[5];
        v15 = v19[4];
        v27 = v19[3];
        v9 = v19[7];
        v8 = v23;
        v7 = v22;
        v6 = v15;
        v16 = dcgettext(0x0, &g_406c98, 0x5);
        v4 = v9;
        v3 = v8;
        v2 = v7;
        v1 = v6;
        v0 = v27;
        v12 = __fprintf_chk();
        return v12;
    case 9:
        v24 = v19[7];
        v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v23 = v19[6];
        v22 = v19[5];
        v15 = v19[4];
        v27 = v19[3];
        v10 = v19[8];
        v9 = v24;
        v8 = v23;
        v7 = v22;
        v6 = v15;
    default:
        v24 = v19[7];
        v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v23 = v19[6];
        v22 = v19[5];
        v15 = v19[4];
        v27 = v19[3];
        v10 = v19[8];
        v9 = v24;
        v8 = v23;
        v7 = v22;
        v6 = v15;
    }
    if (v23 <= 9)
    {
        v12 = ((long long)*(g_406d68 + v25 * 4)) + &g_406d68;
    }
    v16 = dcgettext(0x0, v20, 0x5);
    v5 = v10;
    v4 = v9;
    v3 = v8;
    v2 = v7;
    v1 = v6;
    v0 = v27;
    v12 = __fprintf_chk();
    return v12;
}