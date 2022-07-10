typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char field_20;
    char padding_21[7];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern unsigned int g_41207f;
extern unsigned int statvfs_works_cache.2650;

int get_fs_usage()
{
    char v0;  // [bp-0x1a8]
    unsigned long v1;  // [bp-0x1a0]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long v14;  // rdx
    struct_0 *v15;  // rbx
    unsigned int v16;  // edi
    unsigned int v17;  // r8d
    unsigned long v2;  // [bp-0x198]
    unsigned long v3;  // [bp-0x190]
    unsigned long v4;  // [bp-0x188]
    unsigned long v5;  // [bp-0x180]
    unsigned long v6;  // [bp-0x178]
    unsigned long long v7;  // [bp-0x160]
    char v8;  // [bp-0x126]

    v15 = v14;
    if (((int)statvfs_works_cache.2650) >= 0)
    {
    }
    else
    {
        v12 = uname(((int)&v0));
        if (v12 == 0)
        {
            v12 = strverscmp(((int)&v8), &g_41207f);
            if (v12 >= 0)
            {
                statvfs_works_cache.2650 = 1;
            }
        }
        if (v12 < 0 || v12 != 0)
        {
            statvfs_works_cache.2650 = 0;
            /* goto 4225210; */
        }
    }
    if ((v12 == 0 || ((int)statvfs_works_cache.2650) >= 0) && (((int)statvfs_works_cache.2650) < 0 || !(((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, Conv(32->64, Load(addr=0x41826c<64>, size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)))) && (((int)statvfs_works_cache.2650) >= 0 || v12 >= 0))
    {
        v17 = statvfs(v16, ((int)&v0));
        v11 = -1;
        if (v17 >= 0)
        {
            v10 = (v1 == 0? v0 : v1);
            v15->field_0 = v10;
            v15->field_8 = v2;
            v15->field_10 = v3;
            v15->field_18 = v4;
            v15->field_20 = ((char)(v4 >> 63));
            v15->field_28 = v5;
            v15->field_30 = v6;
            v11 = 0;
            return v11;
        }
        return v11;
    }
    v13 = statfs(v16, ((int)&v0));
    if (v13 >= 0)
    {
        v10 = v7;
        v15->field_0 = v10;
        v15->field_8 = v2;
        v15->field_10 = v3;
        v15->field_18 = v4;
        v15->field_20 = ((char)(v4 >> 63));
        v15->field_28 = v5;
        v15->field_30 = v6;
        v11 = 0;
        return v11;
    }
    else
    {
        v11 = -1;
        return v11;
    }
}
