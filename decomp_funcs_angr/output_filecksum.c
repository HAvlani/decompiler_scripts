extern struct_0 algorithm_tags;
extern struct_1 cksum_algorithm;
extern struct_0 digest_hex_bytes;
extern struct_0 digest_length;
extern unsigned long long stdout[7];

int output_file()
{
    unsigned int v0;  // [bp-0x3c]
    unsigned long|unsigned long long v10;  // rdx
    unsigned long long v11;  // rbx
    char *v12;  // rdi
    unsigned long v13;  // r8
    unsigned long long v14;  // r12
    char *|unsigned long long v2;  // rax
    char *v5;  // rax
    char *v7;  // rax
    char *v8;  // rax
    char v9;  // cl

    v11 = v10;
    v0 = ((int)v13);
    if (v13 == 10)
    {
        v2 = strchr(v12, 0x5c);
        if (v2 == 0)
        {
            v2 = strchr(v12, 0xa);
            if (v2 == 0)
            {
                v2 = strchr(v12, 0xd);
            }
        }
        if (v2 != 0 || v2 != 0 || v2 != 0)
        {
            v2 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v2) = 92;
            }
            else
            {
                __overflow();
            }
        }
    }
    if (*(stdout + 40) >= *(stdout + 48) && ((long long)v9) != 0 || ((long long)v9) != 0 && v13 != 10 || v2 == 0 && v2 == 0 && v2 == 0 && ((long long)v9) != 0 || *(stdout + 40) < *(stdout + 48) && v13 == 10 && v2 != 0 && ((long long)v9) != 0 || *(stdout + 40) < *(stdout + 48) && v13 == 10 && ((long long)v9) != 0 && v2 != 0 || *(stdout + 40) < *(stdout + 48) && v13 == 10 && ((long long)v9) != 0 && v2 != 0)
    {
        fputs_unlocked(*(algorithm_tags + ((long long)cksum_algorithm) * 8), stdout);
        if (cksum_algorithm == 9)
        {
            if (digest_length <= 511)
            {
                __printf_chk(0x1, "-%lu", ((int)digest_length));
            }
        }
        fwrite_unlocked(" (", 0x1, 0x2, stdout);
        print_filename();
        fwrite_unlocked(") = ", 0x1, 0x4, stdout);
        if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x424110<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x424110<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
        {
            v8 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v8) = ((char)v0);
                return v8;
            }
        }
    }
    if (...)
    {
        v14 = 0;
        while (true)
        {
            v10 = ((long long)*(v11 + v14));
            v14 += 1;
            __printf_chk(0x1, "%02x", v10);
            if (digest_hex_bytes >> 1 <= v14)
            {
                break;
            }
        }
        if (((long long)v9) != 0)
        {
            v8 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v8) = ((char)v0);
                return v8;
            }
        }
    }
    if (...)
    {
        v5 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v5) = 32;
        }
        else
        {
            __overflow();
        }
        v7 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v7) = 32;
            print_filename();
            v8 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v8) = ((char)v0);
                return v8;
            }
        }
        else
        {
            __overflow();
            print_filename();
            v8 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v8) = ((char)v0);
                return v8;
            }
        }
    }
}
