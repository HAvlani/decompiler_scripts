typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_2;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char dummy_limb.5449;

int mpz_gcdext()
{
    BOT tmp_23;  // tmp #23
    BOT tmp_2;  // tmp #2
    BOT tmp_24;  // tmp #24
    BOT tmp_16;  // tmp #16
    BOT tmp_38;  // tmp #38
    BOT tmp_1;  // tmp #1
    BOT tmp_43;  // tmp #43
    BOT tmp_19;  // tmp #19
    BOT tmp_33;  // tmp #33
    unsigned long|unsigned long long|unsigned int v0;  // [bp-0xe8]
    unsigned long v1;  // [bp-0xe0]
    unsigned long v10;  // [bp-0xa0]
    unsigned long|unsigned long long|unsigned int v11;  // [bp-0x98]
    unsigned int v12;  // [bp-0x94]
    unsigned long v13;  // [bp-0x90]
    unsigned long|unsigned long long|unsigned int v14;  // [bp-0x88]
    unsigned int v15;  // [bp-0x84]
    unsigned long|struct_3 * v16;  // [bp-0x80]
    unsigned long|unsigned long long|unsigned int v17;  // [bp-0x78]
    unsigned int v18;  // [bp-0x74]
    unsigned long v19;  // [bp-0x70]
    struct_1 * v2;  // [bp-0xd8]
    unsigned long long v20;  // [bp-0x68]
    unsigned int v21;  // [bp-0x64]
    unsigned long|struct_3 * v22;  // [bp-0x60]
    unsigned long long v23;  // [bp-0x58]
    unsigned int v24;  // [bp-0x54]
    unsigned long v25;  // [bp-0x50]
    unsigned long v26;  // [bp-0x40]
    struct_1 * v3;  // [bp-0xd0]
    unsigned long long|struct_2 * v32;  // rax
    unsigned long|unsigned int v33;  // rax
    struct_2 * v4;  // [bp-0xc8]
    struct_2 * v5;  // [bp-0xc0]
    unsigned long long v51;  // rax
    struct_1 *|struct_2 *|unsigned int v56;  // rcx
    unsigned long long|unsigned int v57;  // rdx
    struct_2 *v58;  // rbx
    unsigned long long|struct_2 *|unsigned int v59;  // rbx
    struct_2 *v6;  // [bp-0xb8]
    unsigned long long v60;  // rbx
    unsigned long long v61;  // rbp
    unsigned long long v62;  // rsi
    unsigned int [2]|unsigned long long v63;  // rdi
    struct_1 *|unsigned int v64;  // r8
    struct_1 *v65;  // r12
    struct_2 *v66;  // r14
    unsigned long long v67;  // r15
    unsigned long long v68;  // r15
    struct_0 *v69;  // fs
    unsigned long v7;  // [bp-0xb0]
    unsigned long|unsigned long long v8;  // [bp-0xa8]
    unsigned int v9;  // [bp-0xa4]

    v59 = ((int)v56->field_4);
    v6 = v63;
    v4 = v62;
    v5 = v57;
    v2 = v56;
    v3 = v64;
    if (!(v59 != 0))
    {
        v59 = v63;
        mpz_set();
        tmp_23 = ((long long)v59->field_4);
        v0 = v59->field_4;
        v59->field_4 = v59->field_4 ^ ((int)(tmp_23 >> 31));
        v59->field_4 = v59->field_4 - ((int)(tmp_23 >> 31));
        if (v4 != 0)
        {
            v4->field_4 = 0;
        }
        if (v5 == 0)
        {
            return v26 ^ *(v69 + 0x28);
        }
        mpz_set_si();
        return v26 ^ *(v69 + 0x28);
    }
    else if (((int)v64->field_4) != 0)
    {
        v65 = v2;
        v8 = 0;
        v10 = &dummy_limb.5449;
        v13 = &dummy_limb.5449;
        v16 = &dummy_limb.5449;
        v19 = &dummy_limb.5449;
        v22 = &dummy_limb.5449;
        v25 = &dummy_limb.5449;
        v11 = 0;
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        mpz_set();
        v9 = ((int)*((int *)(((char *)&v8) + 4))) ^ ((int)(((long long)((int)*((int *)(((char *)&v8) + 4)))) >> 31));
        v9 -= ((int)(0 >> 31));
        v67 = (long long)mpz_make_odd();
        mpz_set();
        v12 = ((int)*((int *)(((char *)&v11) + 4))) ^ ((int)(((long long)((int)*((int *)(((char *)&v11) + 4)))) >> 31));
        v12 -= ((int)(0 >> 31));
        v32 = mpz_make_odd();
        tmp_2 = v67;
        tmp_24 = v67 <= v32;
        v7 = (v67 <= v32? v67 : v32);
        v68 = v67 - (v67 <= v32? v67 : v32);
        v61 = v32 - (tmp_24? tmp_2 : v32);
        if (v9 < v32)
        {
            tmp_16 = v8;
            v2 = v3;
            v3 = v65;
            v13 = &dummy_limb.5449;
            v57 = *((long long *)(((char *)&v12) + -4));
            v11 = tmp_16;
            tmp_38 = v68;
            v68 = tmp_1 - (tmp_24? tmp_2 : tmp_1);
            v10 = &dummy_limb.5449;
            v61 = tmp_38;
            v56 = v5;
            v32 = v4;
            v8 = v57;
            v4 = v56;
            v5 = v32;
        }
        mpz_div_qr();
        mpz_mul_2exp();
        mpz_setbit();
        v64 = ((int)((int)*((int *)(((char *)&v8) + 4))));
        v1 = v68 + v61;
        if (v64 > 0)
        {
            v0 = (long long)mpz_make_odd();
            mpz_setbit();
            v51 = v0;
            v0 = &stack_base-120;
            v1 += v51;
            while (true)
            {
                if ((int)mpz_cmp() == 0)
                {
                    break;
                }
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    mpz_sub();
                    mpz_add();
                    mpz_add();
                    v59 = (long long)mpz_make_odd();
                    mpz_mul_2exp();
                    mpz_mul_2exp();
                }
                else
                {
                    mpz_sub();
                    mpz_add();
                    mpz_add();
                    v59 = (long long)mpz_make_odd();
                    mpz_mul_2exp();
                    mpz_mul_2exp();
                }
                v1 += v59;
            }
        }
        else
        {
            mpz_setbit();
        }
        mpz_mul_2exp();
        mpz_set();
        v15 = 0 - ((int)*((int *)(((char *)&v14) + 4)));
        mpz_divexact();
        mpz_set();
        v18 = ((int)*((int *)(((char *)&v17) + 4))) ^ ((int)(((long long)((int)*((int *)(((char *)&v17) + 4)))) >> 31));
        v18 -= ((int)(0 >> 31));
        mpz_divexact();
        mpz_set();
        v24 = ((int)*((int *)(((char *)&v23) + 4))) ^ ((int)(((long long)((int)*((int *)(((char *)&v23) + 4)))) >> 31));
        v24 -= ((int)(0 >> 31));
        v60 = v1 - 1;
        if (v1 != 0)
        {
            while (true)
            {
                if ((((int)(((int)*((int *)(((char *)&v20) + 4))) != 0)) & v22->field_0) != 0 || (((int)(v15 != 0)) & v16->field_0) != 0)
                {
                    mpz_sub();
                    mpz_add();
                    if ((((int)(((int)*((int *)(((char *)&v20) + 4))) != 0)) & v22->field_0) != 0)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if ((((int)(v15 != 0)) & v16->field_0) != 0)
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                if (((((int)(((int)*((int *)(((char *)&v20) + 4))) != 0)) & v22->field_0) == 0 || (((int)(((int)*((int *)(((char *)&v20) + 4))) != 0)) & v22->field_0) == 0) && ((((int)(((int)*((int *)(((char *)&v20) + 4))) != 0)) & v22->field_0) == 0 || (((int)(v15 != 0)) & v16->field_0) == 0) && ((((int)(v15 != 0)) & v16->field_0) == 0 || (((int)(((int)*((int *)(((char *)&v20) + 4))) != 0)) & v22->field_0) == 0) && ((((int)(v15 != 0)) & v16->field_0) == 0 || (((int)(v15 != 0)) & v16->field_0) == 0))
                {
                    v60 -= 1;
                    mpz_div_q_2exp.isra.0();
                    mpz_div_q_2exp.isra.0();
                    if (v60 == 18446744069414584319)
                    {
                        break;
                    }
                }
            }
        }
        mpz_add();
        if (mpz_cmpabs() > 0)
        {
            v14 = ((int)v17);
            v17 = 0;
            v16 = &dummy_limb.5449;
            tmp_43 = ((long long)v18);
            v19 = &dummy_limb.5449;
            v15 = ((int)tmp_43);
            v18 = 0;
            mpz_sub();
        }
        if (((int)v2->field_4) < 0)
        {
            mpz_set();
            v15 = 0 - ((int)*((int *)(((char *)&v14) + 4)));
        }
        if (((int)v3->field_4) < 0)
        {
            mpz_set();
            v21 = 0 - ((int)*((int *)(((char *)&v20) + 4)));
        }
        tmp_19 = v6;
        v33 = ((long long)v6->field_0);
        v6->field_0 = ((int)v11);
        tmp_33 = v6->field_8;
        v6->field_8 = v13;
        v56 = ((int)((int)*((int *)(((char *)&v11) + 4))));
        v11 = ((int)v33);
        v13 = tmp_33;
        v57 = ((int)*(tmp_19 + 4));
        *(tmp_19 + 4) = v56;
        v58 = v4;
        v12 = v57;
        if (v58 != 0)
        {
            v14 = v4->field_0;
            tmp_24 = v58->field_8;
            v58->field_0 = 0;
            v16 = tmp_24;
            v57 = ((int)v58->field_4);
            v58->field_8 = &dummy_limb.5449;
            v56 = ((int)v15);
            v15 = v57;
            v58->field_4 = v56;
        }
        v59 = v5;
        if (v5 != 0)
        {
            v20 = v5->field_0;
            tmp_24 = v59->field_8;
            v59->field_0 = 0;
            v22 = tmp_24;
            v57 = ((int)v59->field_4);
            v59->field_8 = &dummy_limb.5449;
            v21 = v57;
            v59->field_4 = 0;
        }
        if (((int)v8) != 0)
        {
            gmp_default_free();
            v33 = ((int)v11);
        }
        if (v33 != 0)
        {
            gmp_default_free();
        }
        if (((int)v14) != 0)
        {
            gmp_default_free();
        }
        if (((int)v17) != 0)
        {
            gmp_default_free();
        }
        if (v20 != 0)
        {
            gmp_default_free();
        }
        if (((int)v23) != 0)
        {
            gmp_default_free();
            return v26 ^ *(v69 + 0x28);
        }
        return v26 ^ *(v69 + 0x28);
    }
    else
    {
        v66 = v6;
        mpz_set();
        tmp_23 = ((long long)v66->field_4);
        v63 = v4;
        v0 = v66->field_4;
        v66->field_4 = v66->field_4 ^ ((int)(tmp_23 >> 31));
        v66->field_4 = v66->field_4 - ((int)(tmp_23 >> 31));
        if (v63 != 0)
        {
            mpz_set_si();
        }
        if (v5 == 0)
        {
            return v26 ^ *(v69 + 0x28);
        }
        v5->field_4 = 0;
        return v26 ^ *(v69 + 0x28);
    }
}
