int isaac_seed()
{
    BOT tmp_33;  // tmp #33
    BOT tmp_53;  // tmp #53
    BOT tmp_70;  // tmp #70
    BOT tmp_73;  // tmp #73
    BOT tmp_80;  // tmp #80
    BOT tmp_90;  // tmp #90
    BOT tmp_96;  // tmp #96
    unsigned long long [8] v1;  // rax
    unsigned long long v10;  // r9
    unsigned long long v11;  // r10
    unsigned long long v12;  // r11
    unsigned long long v13;  // r12
    unsigned long long v2;  // rcx
    unsigned long long [8] v3;  // rdx
    unsigned long long v4;  // rbx
    unsigned long long v5[259];  // rbp
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // r8

    v3 = v8;
    v1 = v8;
    v2 = 11021839149480329387;
    v6 = 9435133421607575758;
    v12 = 12869931497269318948;
    v13 = 12580906657422019053;
    v11 = 10092185256905347744;
    v5 = v8;
    v10 = 13400657653193689186;
    v9 = 7240739780546808700;
    v4 = v8 + 0x800;
    v7 = 5259722845879046933;
    do
    {
        tmp_33 = v7 + v1[5] ^ v2 + v1[7] >> 9;
        tmp_53 = v13 + v1[6] ^ (v9 + v1[0] - (v6 + v1[4])) * 0x200;
        tmp_70 = v10 + v1[1] - (v7 + v1[5] ^ v2 + v1[7] >> 9) + v11 + v1[2] - (v13 + v1[6] ^ (v9 + v1[0] - (v6 + v1[4])) * 0x200);
        tmp_73 = v2 + v1[7] + v9 + v1[0] - (v6 + v1[4]) ^ v10 + v1[1] - (v7 + v1[5] ^ v2 + v1[7] >> 9) >> 23;
        tmp_80 = ...;
        tmp_90 = ...;
        v9 = ...;
        tmp_96 = v6 + v1[4] - v9;
        v1[0] = v9;
        v10 = tmp_70 ^ tmp_80 >> 14;
        v1[1] = tmp_70 ^ tmp_80 >> 14;
        v11 = tmp_90 ^ tmp_96 * 0x100000;
        v1[2] = tmp_90 ^ tmp_96 * 0x100000;
        v1 += 64;
        v12 = tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17;
        v7 = tmp_33 - (tmp_70 ^ tmp_80 >> 14) + tmp_53 - (tmp_90 ^ tmp_96 * 0x100000);
        v2 = tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
        v1[5] = tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17;
        v6 = (tmp_53 - (tmp_90 ^ tmp_96 * 0x100000)) * 0x4000 ^ tmp_96 + tmp_33 - (tmp_70 ^ tmp_80 >> 14);
        v13 = tmp_53 - (tmp_90 ^ tmp_96 * 0x100000) + tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
        v1[3] = tmp_33 - (tmp_70 ^ tmp_80 >> 14) + tmp_53 - (tmp_90 ^ tmp_96 * 0x100000);
        v1[4] = (tmp_53 - (tmp_90 ^ tmp_96 * 0x100000)) * 0x4000 ^ tmp_96 + tmp_33 - (tmp_70 ^ tmp_80 >> 14);
        v1[2] = tmp_53 - (tmp_90 ^ tmp_96 * 0x100000) + tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
        v1[1] = tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
    }
    while (v4 != v1);
    do
    {
        tmp_33 = v7 + v3[5] ^ v2 + v3[7] >> 9;
        tmp_53 = v13 + v3[6] ^ (v9 + v3[0] - (v6 + v3[4])) * 0x200;
        tmp_70 = v10 + v3[1] - (v7 + v3[5] ^ v2 + v3[7] >> 9) + v11 + v3[2] - (v13 + v3[6] ^ (v9 + v3[0] - (v6 + v3[4])) * 0x200);
        tmp_73 = v2 + v3[7] + v9 + v3[0] - (v6 + v3[4]) ^ v10 + v3[1] - (v7 + v3[5] ^ v2 + v3[7] >> 9) >> 23;
        tmp_80 = ...;
        tmp_90 = ...;
        v9 = ...;
        tmp_96 = v6 + v3[4] - v9;
        v3[0] = v9;
        v10 = tmp_70 ^ tmp_80 >> 14;
        v3[1] = tmp_70 ^ tmp_80 >> 14;
        v11 = tmp_90 ^ tmp_96 * 0x100000;
        v3[2] = tmp_90 ^ tmp_96 * 0x100000;
        v3 += 64;
        v12 = tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17;
        v7 = tmp_33 - (tmp_70 ^ tmp_80 >> 14) + tmp_53 - (tmp_90 ^ tmp_96 * 0x100000);
        v2 = tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
        v3[5] = tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17;
        v6 = (tmp_53 - (tmp_90 ^ tmp_96 * 0x100000)) * 0x4000 ^ tmp_96 + tmp_33 - (tmp_70 ^ tmp_80 >> 14);
        v13 = tmp_53 - (tmp_90 ^ tmp_96 * 0x100000) + tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
        v3[3] = tmp_33 - (tmp_70 ^ tmp_80 >> 14) + tmp_53 - (tmp_90 ^ tmp_96 * 0x100000);
        v3[4] = (tmp_53 - (tmp_90 ^ tmp_96 * 0x100000)) * 0x4000 ^ tmp_96 + tmp_33 - (tmp_70 ^ tmp_80 >> 14);
        v3[2] = tmp_53 - (tmp_90 ^ tmp_96 * 0x100000) + tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
        v3[1] = tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
    }
    while (v4 != v3);
    v5[258] = 0;
    v5[257] = 0;
    v5[256] = 0;
    return tmp_96 + tmp_33 - (tmp_70 ^ tmp_80 >> 14);
}
